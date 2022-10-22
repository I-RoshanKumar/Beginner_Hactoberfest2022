#We have to count the number of vowels in the given string 
t=int(input("ENTER NUMBER OF TEST CASES: ")) #taking number of test cases

for i in range(t):            #looping for t test cases
    
    s=input("ENTER STRING: ") #taking input of the string
    ans=0                     #intializing a count variable to 0
    
    for j in s:               #iterating through each character 
        if j in "aeiouAEIOU": #checking if its a vowel
            ans+=1            #if its a vowel then increment the count variable
    
    print("THE NUMBER OF VOWELS IN YOUR GIVEN STRING IS ",ans) #printing the output