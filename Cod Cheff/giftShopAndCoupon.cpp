#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll sum = 0;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum>k) {
            sum-=arr[i]/2;
            if(sum>k) {
                break;
            }
            else {
                count++;
            }
        }
        else {
            count++;
        }
    }
    cout << count << endl;
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