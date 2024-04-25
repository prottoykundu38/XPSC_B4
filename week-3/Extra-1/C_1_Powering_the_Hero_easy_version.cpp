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
        int ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if (pq.empty())
                {
                    continue;
                }
                ans += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(arr[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}