#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    string s;
    cin >> s;
    int count = 0;
    int qe = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
            count++;
        else if (s[i] == '(')
            count--;
        else
            qe++;
    }

    int open = (qe + count) / 2;
    int close = (qe - count) / 2;

    if (open == 0 || close == 0)
    {
        cout << "YES" << endl;
        return;
    }

    string check = string(open - 1, '(') + string(1, ')') + string(1, '(') + string(close - 1, ')');
    ll ptr = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?')
            s[i] = check[ptr++];
    }

    count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            count++;
        else
            count--;
        if (count < 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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