#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ansa = a - 1;
        int ansb = abs(b - c) + (c - 1);
        if (ansa < ansb)
        {
            cout << "1" << endl;
        }
        else if (ansb < ansa)
        {
            cout << "2" << endl;
        }
        else if (ansa == ansb)
        {
            cout << "3" << endl;
        }
    }
    return 0;
}