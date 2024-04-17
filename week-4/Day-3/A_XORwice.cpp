#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int n = (x ^ y);
        cout << n << "\n";
    }
    return 0;
}