#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n != 0 && k == 1)
    {
        if (n%4==0)
        {
            cout << "On" << endl;
        }
        else
        {
            cout << "Ambiguous" << endl;
        }
    }
    else
    {
        if (n==0 && k==1)
        {
            cout << "On" << endl;
        }
        else
        {
            if(n%4==0 && k==0) {
                cout << "Off" << endl;
            } else {
                cout << "On" << endl;
            }
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