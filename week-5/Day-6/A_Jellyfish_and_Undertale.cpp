#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > a)
            {
                sum += a;
            }
            else
            {
                sum += arr[i];
            }
        }
        cout << (sum + b) - 1 << "\n";
    }
    return 0;
}