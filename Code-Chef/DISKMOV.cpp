#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll MOD = 1000000007;

void solve()
{
    ll n, k;
    cin >> n >> k;
    // vi a(n);

    map<ll, ll> mp;
    ll mxA = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (mxA < x)
            mxA = x;
        mp[x]++;
    }

    vi a;

    for (ll i = 1; i <= 2 * n; i++)
    {
        if (mp[i] != 1)
        {
            a.push_back(i);
        }
    }

    // for(ll i=0;i<a.size();i++) {
    //     cout << a[i] << " ";
    // } cout << endl;
    if (mxA != 2 * n)
    {
        ll ans1 = 0;
        ll ans2 = 0;
        for (ll i = 0; i < k; i++)
        {
            ans1 += (mxA - a[i]);
        }
        k--;
        mxA = 2 * n;
        for (ll i = 0; i < k; i++)
        {
            ans2 += (mxA - a[i]);
        }
        cout << max(ans1, ans2) << endl;
    }
    else
    {
        ll ans = 0;
        //mxA = max(mxA, a[a.size() - 1]);
        for (ll i = 0; i < k; i++)
        {
            ans += (mxA - a[i]);
        }
        cout << ans << endl;
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