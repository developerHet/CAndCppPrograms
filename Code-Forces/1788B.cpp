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
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        
        if (n % 10 == 9)
        {
            int m = n;
            int i = 0;
            bool flag=true;
            int x=0;
            while(n%10==9) {
                x=x*10+4+flag;
                flag=!flag;
                n/=10;
                i++;
            }
            n/=2;
            n=n*pow(10,i)+x;
            cout << n << " " << m-n << endl;
            return;
        }
        cout << n / 2 + 1 << " " << n / 2 << endl;
    }
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