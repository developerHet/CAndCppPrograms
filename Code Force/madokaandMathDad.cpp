#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << n << endl;
    }
    else
    {
        vector<int> v1;
        int sum1 = 0;
        v1.push_back(1);
        sum1 += 1;
        while (sum1 + 1 <= n)
        {
            if (v1[v1.size() - 1] == 1)
            {
                v1.push_back(2);
                sum1 += 2;
            }
            else
            {
                v1.push_back(1);
                sum1 += 1;
            }
        }

        vector<int> v2;
        int sum2 = 0;
        v2.push_back(2);
        sum2 += 2;
        while (sum2 + 1 <= n)
        {
            if (v2[v2.size() - 1] == 1)
            {
                v2.push_back(2);
                sum2 += 2;
            }
            else
            {
                v2.push_back(1);
                sum2 += 1;
            }
        }

        if (sum2 == n)
        {
        
            for (int i = 0; i < v2.size(); i++)
            {
                cout << v2[i];
            }
        }
        else
        {
            
            for (int i = 0; i < v2.size(); i++)
            {
                cout << v1[i];
            }
        }

        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}