#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        if (s == "W")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (n == 2)
    {
        if (s == "RB" || s == "BR" || s == "WW")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (allCharactersSame(s) && s[0] == 'W')
        {
            cout << "YES" << endl;
        }
        else
        {
            int p = 0;
            vector<string> sv;
            while (p < n)
            {
                string a;
                while (p < n && s[p] == 'W')
                {
                    p++;
                }
                while (p < n && s[p] != 'W')
                {

                    a += s[p];
                    p++;
                }
                if(a.length()>0){
                sv.push_back(a);
                }
            }
            
            bool ans = true;
            for (int i = 0; i < sv.size(); i++)
            {
                if (allCharactersSame(sv[i]) || (sv[i].length() == 1 ))
                {
                    ans = false;
                    break;
                }
            }
            // for(int i=0;i<sv.size();i++) {
            //     cout << sv[i] << endl;
            // }
            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
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

/*
1
9
WBBRBWRBW
*/