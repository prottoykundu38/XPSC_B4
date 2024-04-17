#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int b = 1;
        while (b <= x)
        {
            b <<= 1;
        }
        b >>= 1;
        int a = x ^ b;
        cout << a << " " << b << endl;
    }
    return 0;
}