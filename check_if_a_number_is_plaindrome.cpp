#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"ENTER A Number"<<endl;
    string a;cin>>a;
    string b =a ;
    reverse(a.begin(),a.end());
    long long ctr = 0;
    // checking if user has entered a valid number 
    for(int i = 0;i<a.length();i++){
        int k = char(a[i]);
        if(k>=48 and k<=57)ctr++;

    }
    if(ctr!=a.length())cout<<"Enter a valid number"<<endl;
    else if(a==b)cout<<"Number is a plaindrome"<<endl;
    else cout<<"Number is not a plaindrome"<<endl;
    return 0;
}