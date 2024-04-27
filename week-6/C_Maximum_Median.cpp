#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    auto a = [&](ll mid)
    {
        ll count = 0;
        for (int i = n / 2; i < n; i++)
        {
            if (arr[i] < mid)
            {
                count += mid - arr[i];
            }
        }
        return count <= k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}