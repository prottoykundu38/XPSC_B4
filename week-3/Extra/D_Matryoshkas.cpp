#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val = arr[i];
            if (mp[arr[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}