#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll left = 1;
    ll right = n - 1;
    bool ans = false;
    ll blueSum = arr[left-1] + arr[left];
    ll redSum = arr[right];
    if (redSum > blueSum)
    {
        cout << "YES" << endl;
    }
    else
    {
        
        while (left < right)
        {
            left++;
            right--;
            blueSum += arr[left];
            redSum += arr[right];
            if (redSum > blueSum)
            {
                ans=true;
                break;
            } 
        }
        if(ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
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