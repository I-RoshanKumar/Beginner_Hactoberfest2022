#include<iostream>
using namespace std;

int main()
{
    int num, sum=0, prod=1; 
    cin >> num;
    int temp = num;
    while(temp) {
        sum += temp%10;
        prod *= temp%10;
        temp /= 10;
    }
    cout << sum - prod << endl; 
return 0;
}
