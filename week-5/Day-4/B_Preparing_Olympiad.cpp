#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, x, e;
    cin >> n >> l >> r >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    // sort(arr.begin(), arr.end());
    for (int i = 0; i < (1 << n); i++)
    {
        int minD = INT_MAX;
        int maxD = INT_MIN;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
                minD = min(minD, arr[j]);
                maxD = max(maxD, arr[j]);
            }
        }
        int e = maxD - minD;
        if (sum >= l && sum <= r && (e >= x))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
