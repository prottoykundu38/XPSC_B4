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
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string x = "Timur";
        sort(x.begin(), x.end());
        if (s == x)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}