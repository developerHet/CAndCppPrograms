#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll MOD = 1000000007;

void solve()
{
    ll n;
    cin >> n;
    vi v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vi a, b;

    int mx = *(max_element(v.begin(), v.end()));
    if (v[0] == mx)
    {
        cout << -1 << endl;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n && v[i] != mx; i++)
        {
            sum++;
        }
        cout << sum << endl;
        int i = 0;
        while (i < n && v[i] != mx)
        {
            cout << v[i] << " ";
            i++;
        }
        cout << endl;
        cout << n - sum << endl;
        while (i < n)
        {
            cout << v[i] << " ";
            i++;
        }
        cout << endl;
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