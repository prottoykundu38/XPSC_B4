#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());

    auto ok = [&](ll m)
    {
        ll tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += (m / arr[i]);
            if (tot >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
