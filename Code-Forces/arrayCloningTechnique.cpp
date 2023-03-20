#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,repeat=INT_MIN;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        repeat = max(repeat,m[x]);
    }
    if(n==repeat) {
        cout << 0 << endl;
    } else {
        int count = 1;
        while(repeat<=n) {
            if(repeat*2>=n) {
                count +=n-repeat;
                break;
            }
            count+=repeat;
            repeat*=2;
            count++;
        }
        cout << count << endl;
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