#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    for (int i = 0; i < k; i++)
    {
        cin >> q;
        int idx = -1;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = ((l + r) / 2);
            if (q >= arr[mid])
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << idx + 1 << endl;
    }
    return 0;
}