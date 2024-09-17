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

Node *pairwiseSwap(Node *head){
    if(head == NULL || head->next == NULL)
        return head;

    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;

    while(curr != NULL && curr->next != NULL){
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    prev->next = curr;
    return head;
}

Node *PairwiseSwap(Node *head){
    Node *curr = head;

    while(curr != NULL && curr->next != NULL){
        swap(curr->data, curr->next->data);
        curr = curr->next->next;
    }
    return head;
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
    temp5->next = temp6;

    printList(head);
    cout<<endl;
    PairwiseSwap(head);
    printList(head);
    cout<<endl;
    pairwiseSwap(head);
    printList(head);

    return 0;
}