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
int ans[1000001];

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);

    for (int i = 1; i <= 1e6; i++) ans[i] = 1ll * i * i;
 
    int curr = 1;
    for (int i = 1; i <= 2023; i++){
        if (curr > 1e6) break;
        for (int j = 0; j < i; j++){
            if (curr > 1e6) break;
            if (j && j < i - 1 && curr > (i - 1) * 2) ans[curr] -= ans[curr - (i - 1) * 2];
            if (curr + i <= 1e6) ans[curr + i] += ans[curr];
            if (curr + i < 1e6) ans[curr + i + 1] += ans[curr];     
            curr++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}