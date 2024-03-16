#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101;j++)
        {
            for (int k = 0; k < 101;k++)
            {
                if(i+j+k<=a && i*j*k<=b)
                {
                    count++;

                }
            }
        }
    }
    cout << count << "\n";
    return 0;

}