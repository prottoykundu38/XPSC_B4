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
        int res = 1;
        while (res <= n)
        {
            res *= 2;
        }
        res /= 2;
        res--;
        cout << res << endl;
    }
    return 0;
}