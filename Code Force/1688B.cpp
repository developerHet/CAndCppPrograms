#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi odd;
    vi even;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }
    if (even.size() == 0)
    {
        cout << 0 << endl;
    }
    else if (odd.size() > 0)
    {
        cout << even.size() << endl;
    }
    else if (odd.size() == 0)
    {
        int count = 0;
        bool ans = true;
        while(ans) {
            count++;
            for(int i=0;i<even.size();i++) {
                even[i]/=2;
                if(even[i]%2==1) {
                    ans=false;
                    break;
                }
            }
        }
        cout << count+(even.size()-1) << endl;
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