#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n, q;
        cin >> n >> q;
        vector<ll> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<ll> ps(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            ps[i] = ps[i - 1] + v[i];
        }
        while (q--)
        {

            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = ps[n];
            sum = sum - (ps[r] - ps[l - 1]);
            sum = sum + ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }

        // cout << sum << endl;
    }
    return 0;
}