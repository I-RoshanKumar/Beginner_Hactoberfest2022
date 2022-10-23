#include<stdio.h>
#include<stdlib.h>
void trevers(struct node *ptr);
struct node* insertionAtEnd(struct node*head,int data);
struct node{
    int data;
    struct node *next;

};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;
    
    fourth->data=4;
    fourth->next=NULL;
    
    trevers(head);
    printf("then");
    head=insertionAtEnd(head,67);
    trevers(head);
    


}
struct node* insertionAtEnd(struct node*p,int data)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    
    
    while(p!=0)
    {
        if(p->next=NULL)
        {
            p->next=ptr;
            ptr->next=NULL;

        }
        p=p->next;
    }return p;








}
void trevers(struct node *ptr)
{
    while (ptr!=0)
    {
        
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
