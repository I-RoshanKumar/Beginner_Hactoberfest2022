/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
     priority_queue <int> heap;

    heap.push(5);
    heap.push(9);
      heap.push(6);
        heap.push(7);
          heap.push(1);
            heap.push(3);
              heap.push(8);



             cout<<"\nthe max heap element";
             while(!heap.empty()){
                 cout<<heap.top()<<" ";
                 heap.pop();
             }
             priority_queue <int, vector<int>, greater<int> > heap1;
             heap1.push(5);
    heap1.push(9);
      heap1.push(6);
        heap1.push(7);
          heap1.push(1);
            heap1.push(3);
              heap1.push(8);

             cout<<"\nthe min heap element"<<" ";
             while(!heap1.empty()){
                 cout<<heap1.top()<<" ";
                 heap1.pop();
             }
    return 0;
}
