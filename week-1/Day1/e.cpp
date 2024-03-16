#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    bool count = false;
    int res = -1;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            res = i;
            count = true;
            break;
        }
    }
    if (count)
    {
        cout << res << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}