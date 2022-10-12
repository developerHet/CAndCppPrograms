#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vi prf = a;
    for (int i = 1; i < n; i++)
    {
        prf[i] += prf[i - 1];
    }

    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int sum = prf[i];
        sum+=sum;
        int curr = (i+1),last = i;
        int idx;

        while(binary_search(prf.begin(),prf.end(),sum)) {
            idx = lower_bound(prf.begin(),prf.end(),sum) - prf.begin();
            sum+=prf[i];
            curr=max(curr,idx-last);
            last = idx;
        }

        if(last==n-1) ans=min(ans,curr);
    }

    cout << ans << endl;
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