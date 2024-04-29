#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            ll w;
            cin >> w;
            a.push_back(w);
        }
        ll l = 0, r = INT_MAX;
        int res = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll c = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                {
                    c += mid - a[i];
                }
            }
            if (c <= x)
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}