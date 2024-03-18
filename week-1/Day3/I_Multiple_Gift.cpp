#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b;
    cin >> a >> b;
    int count = 0;
    ll x;
    while (a * 2 <= b)
    {
        a = a * 2;
        count++;
    }
    cout << count + 1 << "\n";

    return 0;
}