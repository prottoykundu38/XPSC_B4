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
        ll ans = 1;
        while (n > 1)
        {
            n = n / 2;
            ans += n;
        }
        cout << ans << endl;
    }
    return 0;
}