#include <bits/stdc++.h>

int count_set_bits(unsigned int n) {
  int count = 0;
  while(n) {
    count++;
    n = n & (n-1);
  }
  
  return count;
}

void binary(unsigned int n)
{
    if(n > 0)
    {
        binary(n/2);
        cout<<n%2<<endl;
    }
}

void main()
{
    unsigned int num, result;

   cout<<"Enter an integer";
    cin>>num;
  cout<<"Binary of"<<num<<endl;
    binary(num);
    
    result = count_set_bits(num);
    
   cout<<"Number of set bits in"<<num<<"is"<<res;
   return 0;
}

