#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, ans;
    cin >> a >> b;
    if (a == b)
    {
        ans = 2 * a;
    }
    else
    {
        ans = ((max(a, b)) * 2) - 1;
    }
    cout << ans << "\n";
    return 0;
}