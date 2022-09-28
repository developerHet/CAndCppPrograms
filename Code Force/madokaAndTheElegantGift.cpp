#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    bool mark = false;
    for(int i = 0; i<n-1; i++) {
        for(int j=0;j<m-1;j++) {
            int sum = s[i][j]-'0'+s[i+1][j]-'0'+s[i][j+1]-'0'+s[i+1][j+1]-'0';
            if(sum==3) {
                mark=true;
                break;
            }
            sum = 0;
        }
    }
    if(mark) {
        cout << "NO" << endl;
    }
    else {
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