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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        priority_queue<ll> pq;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if (pq.empty())
                {
                    continue;
                }
                ans += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(arr[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}