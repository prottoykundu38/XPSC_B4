#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = (n * (n + 1)) / 2;
    ll sum1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 = sum1 + arr[i];
    }
    cout << sum - sum1 << "\n";
    return 0;
}