#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll ans = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                sum = arr[i][j];
                ll x = j - 1;
                ll y = j + 1;
                for (ll k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += arr[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += arr[k][y];
                        y++;
                    }
                }
                x = j - 1;
                y = j + 1;
                for (ll k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += arr[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += arr[k][y];
                        y++;
                    }
                }
                if (sum > ans)
                    ans = sum;
            }
        }
        cout << ans << endl;
    }
    return 0;
}