#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            cout << arr[i] << " ";
        }
        count = 1;
    }

    if (count == 0)
    {
        cout << "\n";
    }
    return 0;
}