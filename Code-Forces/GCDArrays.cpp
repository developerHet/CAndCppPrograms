#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    if(l==r && l==1){
        cout << "NO" << endl;
    }
    else if(l==r) {
        cout << "YES" << endl;
    }
    else {
    while(k--) {
        l+=2;
    }
    if((l==r && l%2==0) || l>r) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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