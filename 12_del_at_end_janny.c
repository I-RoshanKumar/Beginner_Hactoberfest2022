#include<stdio.h>
#include<stdlib.h>
struct node*Display(struct node *head);
struct node*del_at_end(struct node*head);

struct node
{
    int data;
    struct node *next;
    /* data */
};

int main()
{
    
    struct node *new_node,*temp,*head;
    head=0;
    int choice=1;
    while (choice!=0)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        

        if(head==0)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("if you enter again then press 1,stop 0");
        scanf("%d",&choice);
        
    }
    Display(head);
    printf("after deleat");
    head=del_at_end(head);
    Display(head);    
}
struct node*Display(struct node *head)
{
    while(head!=0)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}

struct node*del_at_end(struct node*head)
{
    struct node*temp,*prev;
    temp=head;
    while (temp->next!=0)
    {
        prev=temp;
        temp=temp->next;
        
    }
    if(temp==head)
    {
        head=0;
    }
    else{
        prev->next=0;

    }
    free(temp);
    return head;
}