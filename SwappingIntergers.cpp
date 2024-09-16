#include <iostream>

using namespace std;

int main()
{
    // swapping two variables without using third variable
    
    int a, b;
    cout << "enter the two variables: ";
    cin>> a >> b;
    
    a = a - b;
    b = b + a;
    a = b - a;
    
    cout << "after swapping: ";
    cout << a << " " << b;
    
    return 0;
}
