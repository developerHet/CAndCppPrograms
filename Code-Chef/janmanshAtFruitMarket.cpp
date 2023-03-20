#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, a, b, c;
    cin >> x;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);
    int sum=0;
    for(int i=0;i<x-1;i++) {
        sum+=arr[0];
    }
    sum+=arr[1];
    cout << sum << endl;
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