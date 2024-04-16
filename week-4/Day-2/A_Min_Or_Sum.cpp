#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res |= arr[i];
        }
        cout << res << "\n";
    }
    return 0;
}