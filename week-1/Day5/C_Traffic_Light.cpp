#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s, m;
        cin >> s >> m;
        m += m;
        bool f = false;
        int count = 0, ans = 0;

        if (s[0] == 'g')
        {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] == 'g')
            {
                ans = max(ans, count);
                f = false;
            }
            if (m[i] == s[0] && f == false)
            {
                f = true;
                count = 0;
            }
            if (f)
            {
                count++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}