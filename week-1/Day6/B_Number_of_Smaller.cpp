#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> ar(a), arr(b);
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = 0;
    int ans = 0;
    while (r < b)
    {
        while (arr[r] > ar[l] && l < a)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }

    return 0;
}