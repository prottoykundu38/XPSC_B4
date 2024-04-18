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
        int count = -1;
        for (int i = 0; i < n; i++)
        {
            count = arr[i] & count;
        }
        cout << count << endl;
    }
    return 0;
}