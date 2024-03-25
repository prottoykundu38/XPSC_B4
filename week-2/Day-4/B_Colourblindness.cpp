#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n;
        cin >> a >> b;
        string res = "YES";
        for (int i = 0; i < n; i++)
        {
            if ((a[i] != b[i]) && (a[i] == 'R' || b[i] == 'R'))
            {
                res = "NO";
            }
        }
        cout << res << endl;
    }
}