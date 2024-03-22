#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // bool ans = true;
    char x;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            x = '+';
        }
        else
        {
            x = '-';
        }
        cout << x << endl;
    }
    return 0;
}