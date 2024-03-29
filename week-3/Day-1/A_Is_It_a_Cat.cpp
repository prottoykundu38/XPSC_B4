#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        string s;
        cin >> x >> s;
        for (char &c : s)
            c = tolower(c);
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}