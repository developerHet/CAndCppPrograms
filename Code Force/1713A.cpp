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
    int l = 0,r = 0,u=0,d=0;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        if(x==0) {
            u=max(u,y);
            d=min(d,y);
        } else {
            r=max(r,x);
            l=min(l,x);
        }
    }
    cout << 2*(abs(l)+abs(d)+u+r) << endl;
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