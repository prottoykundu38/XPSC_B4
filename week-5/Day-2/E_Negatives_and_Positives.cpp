#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        ll neg = 0;
        ll mn = LLONG_MAX;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                neg++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            sum += abs(arr[i]);
            mn = min(mn, abs(arr[i]));
        }
        if (neg % 2 != 0)
        {
            sum -= (2ll * mn);
        }
        cout << sum << endl;
    }
    return 0;
}