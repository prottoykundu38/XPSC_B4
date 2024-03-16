#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int len = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }

    if (len == 4)
    {
        cout << n << endl;
    }
    else if (len == 3)
    {
        cout << "0" << n << endl;
    }
    else if (len == 2)
    {
        cout << "00" << n << endl;
    }
    else if (len == 1)
    {
        cout << "000" << n << endl;
    }
    else
    {
        cout << "0000" << endl;
    }
    // cout << len << endl;
    // for (int i = 0; i < n;i++)
    // {

    // }
    //     cout << n << endl;
    return 0;
}