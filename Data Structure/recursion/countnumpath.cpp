#include<iostream>
using namespace std;

int countpath(int s, int e)
{
    int count = 0;
    if (s==e)
    {
        return 1;
    }
    if (s>e)
    {
        return 0;
    }
   
    for (int i = 0; i <=6; i++)
    {
        /* code */
       count+= countpath(s+i, e);
    }
    
    return count;
}


int main(){
    cout<<countpath(0, 3)<<endl;
    return 0;
}