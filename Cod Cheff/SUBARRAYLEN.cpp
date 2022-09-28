#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    ll ans = 0;
    map<int,int> m;
    for(int i=0;i<n;i++) {
        int len = arr[i];
        int si = (i-len+1)>0?(i-len+1):0;
        if(m.find(len)!=m.end() && m[len]>=si) si=m[len]+1;
        int ei = (si+len-1>=n)?n-1:(si+len-1);
        if(ei-si+1!=len) continue;
        ans+=min(i-si+1,n-ei);
        m[len]=i;
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