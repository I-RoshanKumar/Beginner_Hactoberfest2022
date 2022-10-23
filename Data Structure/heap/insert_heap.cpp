#include<iostream>
using namespace std;
#define MAX 15
void insert_node(int a[],int n,int k){
  a[n]=k;
  int i=n;
  while(i>1){
     int parent=i/2;
     if(a[parent]<a[i]){
       swap(a[parent],a[i]);
       i=parent;
     }
     else{
      break;
     }
  }
}

void printarray(int a[],int n){
  cout<<"max heap\n";
  for(int i=0;i<=n;i++){
    cout<<a[i]<<" ";
  }
}

void swap(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
}

int main(){
  int a[MAX]={9,8,6,1,5};
  int n=5;
  int k=7;
  insert_node(a,n,k);
  printarray(a,n);

}
