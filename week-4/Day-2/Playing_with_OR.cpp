#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < k - 1; i++)
        {
            sum += (arr[i] % 2);
        }
        int count = 0;
        for (int i = k - 1; i < n; i++)
        {
            sum += (arr[i] % 2);
            count += (sum != 0);
            sum -= (arr[i - k + 1] % 2);
        }
        cout << count << endl;
    }
    return 0;
}