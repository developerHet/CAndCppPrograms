#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string a, b;
    cin >> a;
    cin >> b;
    int sa = 0;
    int sb = 0;
    string ans = "";
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int kA = k;
    int kB = k;
    while (sa < n && sb < m)
    {
        // if (a[sa] < b[sb])
        // {

            if (kB != 0)
            {
                while (sa < n && kA && a[sa] < b[sb])
                {
                    ans += a[sa];
                    sa++;
                    kA--;
                    kB=k;
                }
            }
            else
            {
                if (sb < m && sa < n)
                {
                    ans += a[sa];
                    sa++;
                    kA--;
                    kB = k;
                }
            }
        //}
        // else
        // {

            if (kA != 0)
            {
                while (sb < m && kB && b[sb] < a[sa])
                {
                    ans += b[sb];
                    sb++;
                    kB--;
                    kA=k;
                }
            }
            else
            {
                if (sb < m && sa < n)
                {
                    ans += b[sb];
                    sb++;
                    kB--;
                    kA = k;
                }
            }
        //}
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