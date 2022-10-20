class Node:

    # Initializing a Node

    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:

    # Initializing the Root Node
    def __init__(self):
        self.head = None

    # Inserting Node at the Beginning of the Linked List
    def insertFirst(self, data):

        new_node = Node(data)       # Creating a Node
        new_node.next = self.head   # Connecting the Root Nodes

        self.head = new_node        # Updating the Root Node
    
    # Inserting Node at the End of the Linked List
    def insertLast(self, data):

        new_node = Node(data)       # Creating a Node
        new_node.next = None        # Pointer of the New Node

        if (self.head is None):
            self.head = new_node    # Finding the Last Node
            return
        temp = self.head

        while (temp.next is not None):
            temp = temp.next
        temp.next = new_node        # Updating the New Node

    # Inserting Node based on Position of the Linked List
    def insertPos(self, data, pos):

        new_node = Node(data)
        new_node.next = None

        c = ll.count()
        if(pos == 1):
            ll.insertFirst(data)
        
        elif(pos == c+1):
            ll.insertLast(data)
        
        elif(pos > 1 and pos <= c):
            
            temp = self.head
            for i in range(pos-2):
                temp = temp.next
        
            new_node.next = temp.next
            temp.next = new_node
        
        else:
            print("Position NOT FOUND!!")
    
    # Counting No. of Nodes of the Linked List
    def count(self):
        
        c = 0
        temp = self.head

        while (temp is not None):
            c += 1
            temp = temp.next
        # print(f"There are total {c+1} Nodes")
        return c
    
    # Displaying the Linked List
    def display(self):
        temp = self.head

        while (temp is not None):
            print(temp.data, end=" ")
            temp = temp.next
        print()
    
    # Searching an Element in the Linked List
    def search(self, data):
        
        flag=0
        temp = self.head

        while(temp is not None):
            if(temp.data == data):
                flag=1
                break
            else:
                temp = temp.next
        
        if(flag == 1):
            print("Search Successful")
        else:
            print("Search Unsuccessful")

    # Deleting the First Element from the Linked List
    def deleteFirst(self):
        
        if(self.head is not None):
            self.head = self.head.next
        else:
            print("The Linked List is already empty")

    # Deleting the Last Element from the Linked List
    def deleteLast(self):

        if(self.head is not None):
            temp = self.head
            while(temp.next is not None):
                prev = temp
                temp = temp.next
            if(self.head is temp):
                self.head = None
            else:
                prev.next = None
        else:
            print("The Linked List is already empty")

    # Deleting an Element from the Linked List by its Value
    def deleteValue(self,data):

        temp = self.head
        if(temp is None):
            print('The List is Empty')
        
        if(temp.data == data):
            if(self.count() == 1):
                self.head = None
            else:
                self.head = temp.next

        else:
            while(temp.next is not None):
                if(temp.data == data):
                    prev.next = temp.next
                    break
                else:
                    prev = temp
                    temp = temp.next
            
            if(temp.next is None):
                print("The Data is Not Present")

    # Deleting an Element from the Linked List by its Position
    def deletePos(self,pos):
        
        temp = self.head
        if(temp is None):
            print('The List is Empty')
        else:
            if(pos == 1):
                if(self.count() == 1):
                    self.head = None
                else:
                    self.head = temp.next
            
            elif(pos > self.count() or pos < 1):
                print("Invalid Position")
            
            elif(pos == self.count()):
                while(temp.next is not None):
                    prev = temp
                    temp = temp.next
                
                prev.next = None

            else:
                for i in (1,pos):
                    prev = temp
                    temp = temp.next
                prev.next = temp.next

ll = LinkedList()

a = [1,2,3,4,5,6,7,8,9,10]

for i in a:
    ll.insertLast(i)

ll.insertPos(6,15)
ll.search(10)
ll.deletePos(1)
ll.deleteValue(7)
print(ll.count())
ll.display()
