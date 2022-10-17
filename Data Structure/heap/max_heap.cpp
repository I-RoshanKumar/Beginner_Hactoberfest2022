#include<iostream>
#include<math.h>
using namespace std;
void heapify(int a[],int n,int i){
  int largest=i;
  int l=2*i;
  int r=(2*i)+1;
  if (l<=n && a[l]>a[largest])
        largest=l;
  if (r<=n && a[r]>a[largest])
        largest=r;
    if (largest!=i) {
        swap(a[i], a[largest]);
    heapify(a,n,largest);
  }

}

// void heapSort(int a[],int n)
// {
//   for (int i=n/2-1;i>=0;i--)
//         heapify(a,n,i);
//     for (int i=n-1;i>=0;i--) {
//         swap(a[0],a[i]);
//         heapify(a,i,0);
//     }
// }

void swap(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void maxheap(int a[],int n){
  for(int i=n/2;i>=1;i--){
    heapify(a,n,i);
  }
}

void delete_heap(int a[],int n){
  int last_element=a[n];
  a[1]=last_element;
  heapify(a,n,1);
}

//---------------Incomplete hai abhi-------------//
// void deleteany_heap(int a[],int n,int k){
//   int inf,parent=0;
//   a[k]=inf;
// parent=k/2;
//   while(parent>=1){
// swap(a[k],a[parent]);
//     parent=k/2;
//   }

  delete_heap(a,n);
}

void printarray(int a[],int n){
  cout<<"max heap\n";
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
}


int main(){
  int n;
  cout<<"\nenter the number of element";
  cin>>n;
  int a[n];
  cout<<"\nenter the elements of array";
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  maxheap(a,n);
  // delete_heap(a,n);
deleteany_heap(a,n,2);


}
