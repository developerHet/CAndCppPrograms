#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

int MOD = 1000000007;

void solve()
{
    int n,m;
    cin >> n >> m;
    int ans, s = 0;
    for (int i = 1, max = 0, j; i <= n; i++)
    {
        cin >> j;
        if (s <= m)
        {
            if (j > max)
                max = j, ans = i;
            s += j;
        }
    }
    if (s <= m)
        cout << "0\n";
    else
        cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}