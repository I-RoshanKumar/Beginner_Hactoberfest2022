public class BinarySearch {

    public static void main(String[] args) {
        
        int arr[] = {1, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
        
        int upper = arr.length;
        int lower = 0;            
        
        int x = 23;
        
        int result = binarySearch(arr, lower, upper - 1, x);
        if (result == -1)
            System.out.println("Couldn't find.");
        else
            System.out.println("Element found at index " + result);
    }
    
    static int binarySearch(int arr[], int low, int up, int x)
    {
        if (up >= low) {
            int mid = (low + up) / 2;
  
            if (x == arr[mid])
                return mid;
  
            else if (x < arr[mid])
                return binarySearch(arr, low, mid - 1, x);
  
            else{
                return binarySearch(arr, mid + 1, up, x);
            }
        }
        return -1;
    }
    
}
    
