#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dis = 0;
        int len = size(s);
        if (len % 2 == 0 && len > 2)
        {
            for (int i = 1; i < len / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    dis++;
                    break;
                }
            }
        }
        else if (len % 2 != 0 && len > 3)
        {
            for (int i = 1; i < len / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    dis++;
                    break;
                }
            }
        }
        if (dis)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}