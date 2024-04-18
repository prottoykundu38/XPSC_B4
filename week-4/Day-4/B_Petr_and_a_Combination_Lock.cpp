#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = false;
    for (int i = 0; i <= ((1 << n) - 1); i++)
    {
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s += arr[j];
                s %= 360;
            }
            else
            {
                s -= arr[j];
                s %= 360;
            }
        }
        if (s % 360 == 0)
        {
            ans = true;
        }
    }
    if (ans)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}