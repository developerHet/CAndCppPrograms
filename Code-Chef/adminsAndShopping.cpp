#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(n==1 && x>1) {
        if(x%arr[0]==0) {
            cout << x/arr[0] << endl;
        } else {
            cout << x/arr[0] + 1 << endl;
        }
    }
    else if(x<=arr[0]) {
        cout << n << endl;
    } else {
        if(x%arr[0]==0) {
            cout << max(x/arr[0],n) << endl;
        } else {
            cout << max(x/arr[0] + 1,n) << endl;
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