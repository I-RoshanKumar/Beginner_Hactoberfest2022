#include <stdio.h>
int searchLinear(int arr[],int n,int target){
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main() {
   //Linear search...
  int arr[8] = {7,5,8,2,5,3,1,4};
  int target =3;
  printf(" %d is present at index: %d\n",target,searchLinear(arr,8,target));
   return 0;
}

