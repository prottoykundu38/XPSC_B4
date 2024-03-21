#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> ans(n + m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int l = 0;
    int r = 0;
    int ansptr = 0;
    while (l < n && r < m)
    {
        if (arr1[l] < arr2[r])
        {
            ans[ansptr++] = arr1[l++];
        }
        else
        {
            ans[ansptr++] = arr2[r++];
        }
    }
    while (l < n)
    {
        ans[ansptr++] = arr1[l++];
    }
    while (r < m)
    {
        ans[ansptr++] = arr2[r++];
    }
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}