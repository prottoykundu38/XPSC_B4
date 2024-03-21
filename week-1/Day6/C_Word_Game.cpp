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
        map<string, int> m;
        string arr[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                m[arr[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int res = 0;
            for (int j = 0; j < n; j++)
            {
                if (m[arr[i][j]] == 1)
                {
                    res += 3;
                }
                else if (m[arr[i][j]] == 2)
                {
                    res++;
                }
            }
            cout << res << " ";
        }
        cout << "\n";
    }
    return 0;
}