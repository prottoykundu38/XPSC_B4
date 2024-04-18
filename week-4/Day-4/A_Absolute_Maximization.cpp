#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int Or = 0;
        for (int i = 0; i < n; i++)
        {
            Or |= arr[i];
        }
        int And = -1;
        for (int i = 0; i < n; i++)
        {
            And &= arr[i];
        }
        cout << Or - And << endl;
    }
    return 0;
}