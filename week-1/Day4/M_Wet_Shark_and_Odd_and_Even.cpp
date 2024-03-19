#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll min = INT_MAX;
    ll i, n, m;
    ll sum = 0;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> m;
        sum = sum + m;

        if (m % 2 == 1 && m < min)
        {
            min = m;
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - min;
    }
}