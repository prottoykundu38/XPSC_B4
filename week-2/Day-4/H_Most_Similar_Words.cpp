#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<string> s(a);
        for (int i = 0; i < a; i++)
        {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for (int j = 0; j < a; j++)
        {
            for (int k = j + 1; k < a; k++)
            {
                int sum = 0;
                for (int i = 0; i < b; i++)
                {
                    sum += abs(s[j][i] - s[k][i]);
                }
                ans = min(ans, sum);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
