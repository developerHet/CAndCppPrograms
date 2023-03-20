#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll MOD = 1000000007;

void solve()
{
    int x;
    cin >> x;
    bool ans = false;
    for (int i = 1; i <= sqrt(x); i++)
    {
        int a = (x - (2 * i));
        int b = (2 + i);
        if (a % b == 0 && a > 0)
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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