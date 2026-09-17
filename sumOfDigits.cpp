// Program to find sum of digits of a number

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll sumNum(ll n)
{
    ll sum = 0, inst;
    while (n > 0)
    {
        inst = n % 10;
        sum = sum + inst;
        n /= 10;
    }
    return sum;
}

int main()
{
    ll n;
    cout << "Enter the num: ";
    cin >> n;
    cout << "Sum of it's digits is " << sumNum(n);
    return 0;
}
