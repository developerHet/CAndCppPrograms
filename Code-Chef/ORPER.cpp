#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int x = 0;
    for (int i = 0; i < 31; i++)
    {
        int aZero = 0, bZero = 0;
        for (int j = 0; j < n; j++)
        {
            if (((a[j]) & 1 << i) == 0)
                aZero++;
            if (((b[j]) & 1 << i) == 0)
                bZero++;
        }
        if (bZero == 0)
            x += (1 << i);
        else if (aZero != bZero)
        {
            cout << -1 << endl;
            return;
        }
    }
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] | x;
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    if (c == b)
    {
        cout << x << endl;
    }
    else
    {
        cout << -1 << endl;
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