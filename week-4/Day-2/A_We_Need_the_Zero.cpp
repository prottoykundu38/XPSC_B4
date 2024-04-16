#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            XOR ^= arr[i];
        }
        if (n % 2 == 0 & XOR != 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << XOR << "\n";
        }
    }
    return 0;
}