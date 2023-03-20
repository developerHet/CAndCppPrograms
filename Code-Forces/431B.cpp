// #include <bits/stdc++.h>
// using namespace std;
// int a[] = {1, 2, 3, 4, 5};
// int i, j, ans, s, b[6][6];
// int main()
// {
//     for (i = 1; i <= 5; ++i)
//     {
//         for (j = 1; j <= 5; ++j)
//         {
//             cin >> b[i][j];
//         }
//     }
//     do
//     {
//         s = 0;
//         s += b[a[0]][a[1]];
//         s += b[a[1]][a[0]] + b[a[1]][a[2]];
//         s += 2 * b[a[2]][a[3]] + b[a[2]][a[1]];
//         s += 2 * b[a[3]][a[2]] + 2 * b[a[3]][a[4]];
//         s += 2 * b[a[4]][a[3]];
//         ans = max(ans, s);
//     } while (next_permutation(a, a + 5));
//     cout << ans;
//     return 0;
// }

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


typedef pair<int, int>  pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

int MOD=1000000007;
 
 
 
void solve() {
    vvi m(5,vi(5,0));
    vi idx ={0,1,2,3,4};
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> m[i][j];
        }
    }
    int ans = INT_MIN;
    do
    {
        int sum = 0;
        sum+=m[idx[0]][idx[1]]+m[idx[1]][idx[0]];
        sum+=m[idx[1]][idx[2]]+m[idx[2]][idx[1]];
        sum+=2*(m[idx[2]][idx[3]]+m[idx[3]][idx[2]]);
        sum+=2*(m[idx[3]][idx[4]]+m[idx[4]][idx[3]]);
        ans=max(sum,ans);
    } while (next_permutation(all(idx)));
    cout << ans << endl;
}
 
 
 
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}