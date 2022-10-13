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
    string s;
    cin >> s;

    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
    }

    int zero = n - one;

    if (one % 2 && zero %2 )
    {
        cout << "NO" << endl;
    } else  {
        cout << "YES" << endl;
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