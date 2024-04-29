#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = k + (k - 1) / (n - 1);
        cout << ans << endl;
    }
    return 0;
}