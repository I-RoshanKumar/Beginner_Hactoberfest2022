#include <bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{

    unordered_map<int, int> count;
    
    int maxFreq = 0;
    int maxAns = 0;
    
    for(int i=0; i<arr.size(); i++)
    {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }
  
   for(int i=0; i<arr.size(); i++)
   {
       if(maxFreq == count[arr[i]]){
           maxAns = arr[i];
           break;
       }
   }
    return maxAns;
    
}

int main()
{
    int n;
    vector<int> v;
    cout << "Enter number of elements:" ; 
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int element;
        cout << "Enter: ";
        cin >> element;

        v.push_back(element);
        cout << endl;
    }

    cout << "The max number of occurence the number has is: " << maximumFrequency(v, v.size());

    return 0;
}