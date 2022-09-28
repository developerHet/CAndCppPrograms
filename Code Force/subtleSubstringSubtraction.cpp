#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << "Bob " << s[0] - 96 << endl;
    }
    else if (s.length() % 2 == 0)
    {
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            count += (s[i]-96);
        }
        cout << "Alice " << count << endl;
    }
    else
    {
        int count = 0;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            count += (s[i]-96);
        }
        if (s[0] > s[len - 1])
        {

            cout << "Alice " << count - (2 * s[len - 1]) + 2*96 << endl;
        }
        else
        {
            cout << "Alice " << count - (2 * s[0]) + 2*96 << endl;
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