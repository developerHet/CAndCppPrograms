#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll MOD = 1000000007;


int nBit(int n)
{
    if (n==0)return 0;
    else return (n & 1) + nBit(n >> 1);
}

void solve()
{

    int n;
    cin >> n;
    cout << nBit(n) - 1 << endl;
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

