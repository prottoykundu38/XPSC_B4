#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(105);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll l;
            string s;
            cin >> l;
            cin >> s;
            for (ll j = 0; j < l; j++)
            {
                if (s[j] == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }

                else
                {
                    arr[i]--;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}