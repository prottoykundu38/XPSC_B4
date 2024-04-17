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
        n--;
        int y = log2(n);
        y = pow(2, y);
        int w = n - y;
        for (int i = y; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << w << " ";
        for (int i = 0; i < y; i++)
        {
            if (i == w)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}