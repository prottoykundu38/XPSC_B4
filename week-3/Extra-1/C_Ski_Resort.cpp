#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        ll ans = 0;
        ll res = 0;
        for (int i = 0; i < n; i++)
        { // Corrected loop starting index
            ll m;
            cin >> m;
            if (m <= q)
            {
                ans++;
                if (ans >= k)
                { // Condition moved outside the loop
                    res += (ans - k + 1);
                }
            }
            else
            {
                ans = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
