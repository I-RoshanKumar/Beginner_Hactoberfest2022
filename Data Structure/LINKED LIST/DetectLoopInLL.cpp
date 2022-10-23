#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head, int i){
    while(i){
        cout<<head->data<<" ";
        head = head->next;
        i--;
    }
}

bool isLoop(Node *head){
    Node *temp = new Node(0);
    Node *curr = head;

    while(curr != NULL){
        if(curr->next == NULL)
            return false;

        if(curr->next == temp)
            return true;

        Node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
}

bool IsLoop(Node *head){
    unordered_set <Node *> s;

    for(Node *curr = head; curr != NULL; curr = curr->next){
        if(s.find(curr) != s.end())
            return true;

        s.insert(curr);
    }
    return false;
}

// using Floyd cycle
bool isLooP(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return true;

    }
    return false;
}


int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    Node *temp5 = new Node(60);
    Node *temp6 = new Node(70);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    temp5->next = temp2;

    // printList(head, 7);

    if(isLooP(head))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}