#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// Time Complexity-> O(Log(n))
ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << power(2, 10, M) << endl;
    //(2^10)%M this will be calculated
    // 1024
    return 0;
}