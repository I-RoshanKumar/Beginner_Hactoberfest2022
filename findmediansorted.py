def findMedianSortedArrays(nums1, nums2):
    # Always binary search on the smaller array
    if len(nums1) > len(nums2):
        nums1, nums2 = nums2, nums1

    x, y = len(nums1), len(nums2)
    low = 0
    high = x

    while low <= high:
        # Partition both arrays
        partitionX = (low + high) // 2
        partitionY = (x + y + 1) // 2 - partitionX

        # Edge cases for partitions
        maxLeftX = float('-inf') if partitionX == 0 else nums1[partitionX - 1]
        minRightX = float('inf') if partitionX == x else nums1[partitionX]

        maxLeftY = float('-inf') if partitionY == 0 else nums2[partitionY - 1]
        minRightY = float('inf') if partitionY == y else nums2[partitionY]

        # Check if correct partition   
        if maxLeftX <= minRightY and maxLeftY <= minRightX:
            # Even length case
            if (x + y) % 2 == 0:
                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2
            else:
                return max(maxLeftX, maxLeftY)
        elif maxLeftX > minRightY:
            # Move left
            high = partitionX - 1
        else:
            # Move right
            low = partitionX + 1

    raise ValueError("Input arrays are not sorted.")
