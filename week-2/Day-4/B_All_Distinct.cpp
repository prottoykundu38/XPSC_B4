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
        set<int> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        ans = s.size();
        if ((n - ans) % 2 == 0)
        {
            ans++;
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}