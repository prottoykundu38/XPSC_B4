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
        string s;
        cin >> s;
        vector<ll> v;
        ll tot = 0;
        int mnchange = 0;
        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    mnchange++;
                    tot = tot + r;
                    v.push_back(r - l);
                }
                else
                {
                    tot += l;
                }
            }
            else
            {
                if (l > r)
                {
                    mnchange++;
                    v.push_back(l - r);
                    tot += l;
                }
                else
                {
                    tot += r;
                }
            }
        }
        vector<ll> vr(n + 1);
        for (int i = mnchange; i <= n; i++)
        {
            vr[i] = tot;
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (int i = mnchange - 1; i >= 1; i--)
        {
            tot -= v.back();
            v.pop_back();
            vr[i] = tot;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << vr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}