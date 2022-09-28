#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPowerOfTwo(ll x)
{
    return x && (!(x & (x - 1)));
}

bool isFactorial(ll n)
{
    for (ll i = 1;; i++)
    {
        if (n % i == 0)
        {
            n /= i;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    ll n;
    vector<ll> v;
    cin >> n;
    if (isPowerOfTwo(n) || isFactorial(n))
    {
        cout << 1 << endl;
    }
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            if (isPowerOfTwo(i) || isFactorial(i))
            {
                v.push_back(i);
            }
        }
        ll vSize = v.size();
        ll sum=0;
        ll count = 0;
        while(vSize>0 && sum!=n) {
            if(sum+v[vSize-1]<=n) {
                sum+=v[vSize-1];
                count++;
            }
            vSize--;
        }
        if(sum==n) {
        cout << count << endl;
        }
        else {
            cout << -1 << endl;
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