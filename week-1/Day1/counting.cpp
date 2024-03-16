#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        ans++;
    }
    cout << ans << "\n";
    return 0;
}