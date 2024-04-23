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

        int l = 0;
        int r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = ((l + r) / 2);
            if (arr[mid] == q)
            {
                found = true;
                break;
            }
            if (arr[mid] < q)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}