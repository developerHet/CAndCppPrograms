#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll MOD = 1000000007;

void solve()
{
    ll n, m;
    cin >> n;
    vi a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    vi b(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll sum = INT_MIN, me = 0, s = 0;
    for (ll i = 0; i < n; i++)
    {
        me += a[i];
        if (sum < me)
        {
            sum = me;
        }
        if (me < 0)
        {
            me = 0;
        }
    }
    

    for (ll i = 0; i < m; i++)
    {
        if (b[i] > 0)
        {
             sum += b[i];
        }
    }

    

    cout << sum << endl;
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