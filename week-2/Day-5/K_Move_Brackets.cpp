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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            char s[n];
            cin >> s[i];
            if (s[i] == '(')
            {
                count++;
            }
            else if (count > 0)
            {
                count--;
            }
        }

        cout << count << "\n";
    }
    return 0;
}