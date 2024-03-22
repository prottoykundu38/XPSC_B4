#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int count = 0;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}