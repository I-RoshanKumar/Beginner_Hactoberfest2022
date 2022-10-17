#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a, *b, *c, d, e, f; // * = value at address

    a = &d;
    b = &e;
    c = &f;

    cout << "\nEnter the number:\n";
    scanf("%d %d", &d, &e);
    *c = *b + *a;
    cout << "\nThe value of the addition is:%d", *c;
    getch();
}
