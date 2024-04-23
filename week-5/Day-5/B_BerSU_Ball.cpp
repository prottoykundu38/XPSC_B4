#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<int> ar(m);
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    sort(arr.begin(), arr.end());
    sort(ar.begin(), ar.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == ar[j] || arr[i] + 1 == ar[j] || arr[i] - 1 == ar[j])
            {
                count++;
                ar[j] = -100;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}