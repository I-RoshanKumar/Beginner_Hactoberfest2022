//This program converts haxadecimal to decimal
#include<iostream>
#include<cmath>
using namespace std;

string decimaltohexadecimal(long long n){
    string ans;
    long long x = 1;
    while(n>x){
        x = x*16;
        cout<<"x is "<<x<<endl;
    }
    x= x/16;
    cout<<"Highest x is "<<x<<endl;
    long long quo;
    while(x>0){
        quo = n/x;
        n = n- quo*x;
        x= x/16;
        if(quo<10){
            ans+=quo+48;
        }
        else{
            ans += quo-10+65;
        }
    }
    return ans;
}

int main(){
    long long dec;
    cin>>dec;
    cout<<decimaltohexadecimal(dec)<<endl;
}
