#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int getIntersection(int d, struct node *h1, struct node *h2)
{
    struct node *curr1 = h1;
    struct node *curr2 = h2;
    int res;
    for (int i = 0; i < d; i++)
    {
        if (curr1 == NULL)
        {
            return -1;
        }
        curr1 = curr1->next;
    }
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1 == curr2)
        {
            res = curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return res;
}

int getInter(struct node *h1, struct node *h2)
{
    int c1 = 0, c2 = 0;
    int res = 0;
    int d;
    struct node *t1 = h1;
    struct node *t2 = h2;
    while (h1 != NULL)
    {
        c1++;
        t1 = t1->next;
    }
    while (h2 != NULL)
    {
        c2++;
        t2 = t2->next;
    }
    if (c1 > c2)
    {
        d = c1 - c2;
        res = getIntersection(d, h1, h2);
    }
    else
    {
        d = c2 - c1;
        res = getIntersection(d, h2, h1);
    }
    return res;
}
int main()
{
    // creating nodes fro 1st linked list
    struct node *h1 = new node(1);
    struct node *p1 = new node(2);
    struct node *p2 = new node(3);
    struct node *p3 = new node(4);

    // creating nodes fro 2st linked list
    struct node *h2 = new node(5);
    struct node *p11 = new node(3);
    struct node *p12 = new node(4);

    // forming linked list
    h1->next = p1;
    p1->next = p2;
    p2->next = p3;

    h2->next = p11;
    p11->next = p12;

// getting intersection of two linked list
    cout << getInter(h1, h2);
    return 0;
}
