#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll MOD = 1000000007;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    ll sum = 0;
    ll firstOne = -1;
    ll lastOne;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            sum++;
            if (firstOne == -1)
            {
                firstOne = i;
            }
            lastOne = i;
        }
    }

    ll total = sum * m;
    if (total % 2 == 1)
    {
        cout << 0 << endl;
    }
    else if (sum == 0)
    {
        cout << n * m << endl;
    }
    else
    {
        if (m % 2 == 0)
        {
            cout << firstOne + n - lastOne << endl;
        }
        else
        {
            ll i1 = 0;
            ll i2 = 0;
            ll s = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == '1')
                {
                    s++;
                    if (s == sum / 2)
                    {
                        i1 = i;
                    }
                    else if (s == sum / 2 + 1)
                    {
                        i2 = i;
                        break;
                    }
                }
            }
            cout << i2 - i1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}