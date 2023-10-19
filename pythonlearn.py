print("Basic Mathematical calculator")
print("Enter A number from the following table") #Output statement
#print("Enter A number from the following table") #Output statement
print("For Basic Input Output program enter 1")
print("For Arithmatic calculation enter 2")
print("For functions program enter 3")
print("For loops enter 4")
print('For string handeling enter 5')
print('For file handling enter 6')
print('For list enter 7')
print("For Dictionary enter 8")
print('For Tuple enter 9')
print("This is by akash")
a=int(input()) #Input statement
if a==1 : #if statement used
    print("Input your name")
    name=input()
    print(name)
elif a==2 : #else if statement used
    n1=int(input('Enter Number 1'))
    n2=int(input('Enter Number 2'))
    print('Sum=',n1+n2) #Addition statement
    print('Difference=',n1-n2) #Subtraction Statement
    print('Product=',n1*n2) #Multiplication
    print('Division quotient=',int(n1/n2),'Remainder=',n1%n2) #Division statement ,int() is used for type conversion
elif a==3 :
    print('For function without argument enter 1')
    print('For function without argument enter 2')
    b=int(input())
    if b==1:    #Nested if
        print("Example of function without argument")
        def fact1() : #function defination (Factorial program using functions)
            num =int(input("Enter the number"))
            fact =1
            if num <0:
                print("Factorial Doesn't Exist ")
            elif num ==0:
                print("Factorial of 0 =1")
            else :
                for i in range(1,num+1):  #For loop
                    fact=fact*i
                print("Factorial of ",num,"=",fact)
        fact1() #function call
    elif b==2: #Nested else if
        print("Example of function with argument")
        def fact2(n3): #Declaration of function with argument
            if n3==0:
                return 1 #return statement of function
            else :
                return n3*fact2(n3-1) #recursion of function
        n4=int(input("Enter the number to calculate factorial"))
        print("Factorial of",n4,"=",fact2(n4)) #Function call with n4 as argument
    else:
        print("Wrong Input")
elif a==4:
    print('for definite loop enter 1')
    print('for indefinite loop enter 2')
    b=int(input())
    if b==1:
        print('For loop example : sum of all numbers b/w given range')
        n5=int(input("Enter the lower limit"))
        n6=int(input("Enter the upper limit"))
        sum =0
        for i in range(n5,n6+1):   #definite loop
            sum = sum +i
        print('Sum of all numbers from',n5,"to",n6,'=',sum)
    elif b==2:
        print('While loop example:To count no of digits in a number')
        n7=int(input('Enter the number'))
        digit=0
        n7_copy=n7
        while(n7!=0) : #indefinite loop
            digit=digit+1
            n7=int(n7/10)
        print('Number of digit in',n7_copy,'=',digit)
    else :
        print('Wrong input')
elif a==5:
    string1=input('Enter the String')
    print('Enter 1 to capitalize the string')
    print('Enter 2 to find string length ')
    print('Enter 3 to print a sliced string')
    print('Enter 4 to find a phase is present or not')
    print('Enter 5 to concatenate two strings ')
    print('Enter 6 to replace a character in string')
    print('Enter 7 to split the string in words')
    b=int(input())
    if b==1:
        print(string1.upper())  #Capitalize function of string
    elif b==2:
        print(len(string1))     #String length calculation
    elif b==3:
        li=int(input('Enter the lower index'))
        ui=int(input('Enter the upper index'))
        print(string1[li:lu+1])  #Slicing of string
    elif b==4:
        st2=input("Enter the phrase to find")
        if st2 in string1 :   #String search statement
            print(st2, 'is present in ',string1)
        else :
            print("We dont do that here")
    elif b==5 :
        string2=input('Enter the second string')
        print(string1 +" "+string2)     #String concatenation (It can be done by both + and * operator)
    elif b==6:
        c1=input('Enter character to be replaced ')
        c2=input('Enter character to replace')
        print(string1.replace(c1,c2))   #Replacing a character
    elif b==7:
        print(string1.split())  #List of splited words
    elif b==8:
        st2=input('Enter the phrase to count')
        print(st2,"is",string1.count(st2),"in",string1)
    else :
        print('We dont do that here')
elif a==6:
    print('File python.txt is available in repository')
    filename=input('Enter the file name to be opened')
    print('Enter 1 to read the file')
    print('Enter 2 to count number of words in file')
    print('Enter 3 to count number of occurance of words')
    b=int(input())
    file = open(filename) #file opening
    if b==1:
        for line in file :
            print(line)
    elif b==2:
        numwords=0
        for line in file:
            words =line.split()    #words spliting from a file
            numwords=numwords+len(words)
        print('Number of words = ',numwords)
    elif b==3:
        di=dict()
        for line in file:
            line=line.rstrip()    #removing space from end of line
            words =line.split()   #splitting words from lines
            for w in words :
                di[w]=di.get(w,0)+1 #tupple of words
        print(di)
    else :
        print('We dont do that here')
elif a==7 :
    list1=list() #List creation
    n=int(input('Enter number of list items'))
    while n>0:
        list1.append(input()) #input of list items
        n=n-1
    print(list1) #output list
    print('Enter 1 to count number of list item')
    print('Enter 2 to sort the list')
    print('Enter 3 to reverse the list')
    print('Enter 4 to remove the item with specified value')
    print('Enter 5 to remove the item at specified position')
    print('Enter 6 to find occurance of a specific list item')
    b=int(input())
    if b==1:
        print('Length of list=',len(list1)) #length of list function
    elif b==2:
        list1.sort() #sorting of list function
        print(list1)
    elif b==3:
        list1.reverse() #Reverse list
        print(list1)
    elif b==4:
        l1=input("Enter the value to be removed")
        list1.remove(l1) #list item removal
        print(list1)
    elif b==5:
        l2=input('Enter the position to remove item')
        list1.pop(l2-1) #list item removal by position
        print(list1)
    elif b==6:
        l3=input('Enter the list item to be counted')
        print(l3,'occurs',list1.count(l3),'times') #list item count
    else :
        print('We dont do that here')
elif a==8:
    dict1=dict() #dictionary declaration
    n=int(input('Enter number of dictionary items'))
    list3=list()
    while n>0:
        list3.append(input('Enter list key'))
        n=n-1
    for litem in list3:
        print('For Key =',litem)
        dict1[litem]=input('Enter value') #storing value of dictionary items
    print(dict1)
    print("Enter 1 to change dictionary item key")
    print('Enter 2 to change dictionary item value')
    print('Enter 3 to swap key and values')
    b=int(input())
    if b==1 :
        x = input('Enter the key to be replaced')
        y = input('Enter the new key')
        dict1[y]=dict1[x]
        del dict1[x]
        print(dict1)
    elif b==2:
        x=input('Enter the key whose value is to be replaced')
        y=input("Enter new value")
        dict1[x]=y
        print(dict1)
    elif b==3:
        print([(v,k) for k,v in dict1.items()])
    else :
        print('We dont do that here')
elif a==9:
    values=input("Enter the tuple items by seperatig with comma(,)")
    splitvalue=values.split(',')
    tup=tuple(splitvalue)
    print(tup)
    print('Enter 1 to find length of tuple')
    print('Enter 2 to sort the tuple')
    b=int(input())
    if b==1:
        print('Length of tuple=',len(tup))
    elif b==2:
        print('Sorted tuple')
        print(sorted(tup))
    else :
        print('We dont do that here')
else :
    print('We dont do that here')
    print('Goodbye again!!!!!')
