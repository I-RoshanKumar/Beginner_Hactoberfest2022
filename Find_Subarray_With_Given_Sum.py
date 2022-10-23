#We have to check subarrays whose sum of the elements is equal to target sum (user input)

t=int(input("ENTER NUMBER OF TEST CASES: ")) #taking number of test cases

for i in range(t):            #looping for t test cases
    
    n=int(input("ENTER THE LENGTH OF THE ARRAY: ")) #taking input of the length of the array
    
    print("ENTER THE ARRAY OF INTEGERS:") 
    l=list(map(int,input().split()))     #inputting the array
    
    target=int(input("REQUIRED SUM: "))  #taking input of target sum

    print("THE SUBARRAYS WITH SUM = ",target," ARE :-")

    z=0 #counter variable initialized to 0 to count the number of desirable subarrays

    for j in range(n):
        for k in range(j+1,n+1): #Two for loops to get the starting and ending indexes for all possible subarrays
            
            if sum(l[j:k])==target: #calculating sum of subarrays and checking if it is equal to target sum
                print(l[j:k]) #printing the required subarrays
                z+=1 
    
    if z==0: #if no desirable subarray exists we print no such subarray exists
        print("THERE ARE NO SUBARRAYS WHOSE SUM IS ",target)

    
