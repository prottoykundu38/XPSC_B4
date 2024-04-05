#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int arr[115][115];
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int s = arr[1][1];
        if (s != arr[2][1])
            s = arr[3][1];
        cout << s << " ";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (arr[i][1] != s)
                    cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}