#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int start, int end){
    if(end <= start)
        return 0;

    int profit = 0;

    for(int i=start; i<end; i++){
        for(int j=i+1; j<=end; j++){
            if(price[j] > price[i]){
                int curr_profit = price[j] - price[i] + maxProfit(price, start, i-1) + maxProfit(price, j+1, end);

                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

// Efficient approach
int maxProfit(int price[], int n){
    int profit = 0;

    for(int i=1; i<n; i++){
        if(price[i] > price[i-1])
            profit += (price[i] - price[i-1]);
    }
    return profit;
}

int main()
{
    int n = 5;

    int price[n] = {1, 5, 3, 8, 12};

    cout<<maxProfit(price, 0, n-1)<<endl;
    cout<<maxProfit(price, n);

    return 0;
}