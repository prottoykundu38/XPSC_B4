#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    char ans;
    bool check;
    int count = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        check = false;

        for (int j = 0; j < len; j++)
        {
            if (s[j] == i)
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "None"
         << "\n";
}