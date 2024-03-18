#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 0, j = 0;
    bool ans = false;
    while (a * i <= c)
    {
        if ((c - a * i) % b == 0)
        {
            ans = true;
            break;
        }
        i++;
    }

    if (ans)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }

    return 0;
}