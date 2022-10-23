#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void leftRotate(int arr[], int n, int d){
    for(int i=0; i<d; i++){
        leftRotateByOne(arr, n);
    }
}

// Better Method :-
void LeftRotate(int arr[], int n, int d){
    int temp[d];

    for(int i=0; i<d; i++)
        temp[i] = arr[i];

    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i=0; i<d; i++)
        arr[n - d + i] = temp[i];
}

// Efficient method :-
void reverse(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void LeftRotatE(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main()
{
    int n = 5;
    int d = 2;

    int arr[] = {1, 2, 3, 4, 5};

    LeftRotatE(arr, n, d);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
