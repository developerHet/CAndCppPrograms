#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int c[3];
    c[0] = c[1] = c[2] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if ((v[i] % 10) == 0)
        {
            c[0]++;
        }
        else if ((v[i] % 10) == 5)
        {
            v[i] += 5;
            c[0]++;
        }
        else
        {
            c[2]++;
            while ((v[i] % 10) != 2)
            {
                v[i]  =  v[i] + (v[i] % 10);
            }
        }
    }

    if (c[0] == n)
    {
        sort(v.begin(), v.end());
        if (v[0] == v[n - 1])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        bool flag = true;
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            if ((v[i] - v[i - 1]) % 20 != 0)
            {
                
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
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