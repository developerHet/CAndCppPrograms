#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll MOD = 1000000007;

void solve()
{
    vi v(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v[0] == 0 && v[1] == 0 && v[2] == 0)
    {
        cout << 0 << endl;
    }
    else if (v[0] >= 3 && v[1] >= 3 && v[2] >= 3)
    {
        cout << 6 << endl;
    }
    else if (v[0] == 0 && v[1] == 0 && v[2] >= 1)
    {
        cout << 1 << endl;
    }
     else if (v[0] == 0 && v[1] == 1 && v[2] >= 1)
    {
        cout << 2 << endl;
    }
    else if (v[0] == 2 && v[1] >= 2 && v[2] >= 3)
    {
        cout << 5 << endl;
    }
    else if (v[0] >= 1 && v[1] >= 2 && v[3] >= 2)
    {
        cout << 4 << endl;
    }
    else
        cout << 3 << endl;
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