#include<iostream>
using namespace std;
void heapify(int a[],int n,int i){
  int largest=i;
  int l=2*i;
  int r=(2*i)+1;
  if (l<=n && a[l]<a[largest])
        largest=l;
  if (r<=n && a[r]<a[largest])
        largest=r;
    if (largest!=i) {
        swap(a[i], a[largest]);
    heapify(a,n,largest);
  }

}

void swap(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=a;
}

void minheap(int a[],int n){
  for(int i=n/2;i>=1;i--){
    heapify(a,n,i);
  }
}

// void delete_heap(int a[],int n){
//   int last_element=a[n];
//   a[1]=last_element;
//   heapify(a,n,1);
// }

int main(){
  int n;
  cout<<"\nenter the number of element";
  cin>>n;
  int a[n];
  cout<<"\nenter the elements of array";
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  minheap(a,n);
  // delete_heap(a,n);
  cout<<"max heap\n";
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }

}
