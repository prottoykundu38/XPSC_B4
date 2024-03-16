#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ab = 0;
    int C = c + 0.5;
    for (int i = 1; i * a <= C; i++)
    {
        ab += b;
    }
    cout << ab << "\n";
    return 0;
}