// here we put in string the value of pi=3.14
#include<iostream>
using namespace std;

void replaceP(string s)
{
    if (s.length()==0)
    {
        return;
    }

    if (s[0]=='p' && s[1]=='i')
    {
        /* code */
        cout<<"3.14";
        replaceP(s.substr(2));
    }
    else{
        cout<<s[0];
        replaceP(s.substr(1));
    }
    
    
}

int main()
{
    replaceP("pippppiiiipi");
    return 0;
}