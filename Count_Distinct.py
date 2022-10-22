#We have to count the number of distinct elements in an array using hashmap

t=int(input("ENTER NUMBER OF TEST CASES: ")) #taking number of test cases

for i in range(t):            #looping for t test cases
    
    n=int(input("ENTER THE LENGTH OF THE ARRAY: ")) #taking input of the length of the array
    
    print("ENTER THE ARRAY OF INTEGERS:") 
    l=list(map(int,input().split()))     #inputting the array

    count=0 #creating a count variable to count the number of distinct elements in the array

    d={} #creating an empty dictionary (hashmap)

    for j in l: #iterating through the elemts of the array
        if j not in d: #checking if the eleent is the keys of dictionary
            d[j]=1     #if the element is not in the keys them we add it to the dictionary
            count+=1   #increment the count variable
    
    print("THE NUMBER OF DISTINCT ELEMENTS = ",count) #output the final count value

