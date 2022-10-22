#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==0){
        cout<<"1"<<endl;
        return ;
    }
    cout<<n<<endl;
    dec(n-1);

}

void inc(int n)
{
     if(n==0){
        cout<<"1"<<endl;
        return ;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main()
{
    //here we have to print numbers in decreasing order
    // like n = 9 then we have to print num like 9 8 7 6 ....
    int n;
    cin>>n;
    dec(n);
    cout<<"increasing order"<<endl;
    inc(n);
    return 0;
}