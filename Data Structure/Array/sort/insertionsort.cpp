#include <bits/stdc++.h>
using namespace std;

int printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// non adaptive
void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        cout << "working on Pass " << i << endl;
        printArr(arr, n);
    }
}
// time complexity best O(n)
// time complexity worst O(nsquare)
// stable
// adaptive
void insertion_sort_Correct(int *arr, int n)
{
    // for each passes
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i - 1;
        int key = arr[i];

        while (arr[j] > key && j >= 0)
        {
            //    swap(arr[j],arr[j+1]);
            // arr[i] = arr[j];
            arr[j+1] = arr[j];
            j--;   //index 0,1,2.... se compare kren ke liye  pass 3 me 0,1,2 se compare kiya hai
        }
        arr[j + 1] = key;
        cout << "Pass " << i << " --> ";
        printArr(arr, n);
        cout<<"i = "<<i<<" , key = "<<key<<" , j = "<<j<<endl;
        cout<<"\n";
    }
}

int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    // cout<<"Bubble Sort"<<endl;
    // bubble_sort(arr,n);
    cout<<"Inerstion Sort"<<endl;
    insertion_sort_Correct(arr, n);
    printArr(arr, n);
    // reverse(&arr, n);
}
