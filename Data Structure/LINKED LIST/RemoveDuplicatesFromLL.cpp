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

void printList(Node *head){

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void removeDups(Node *head){
    Node *curr = head;

    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }else{
            curr = curr->next;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(30);
    Node *temp4 = new Node(30);
    Node *temp5 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;

    removeDups(head);
    printList(head);

    return 0;
}