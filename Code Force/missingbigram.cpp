#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int mark = 0;
        int count;
        cin >> n;
        string s[n];
        string ans;
        for (int i = 0; i < n - 2; i++)
        {
            cin >> s[i];
        }
        if (n == 3)
        {
            ans = ans + s[0][0] + s[0][1] + "a";
            cout << ans << endl;
        }
        else
        {
            cout<<s[0][0];

            for (int i = 0; i < n - 3; i++)
            {
                if (s[i][1] == s[i + 1][0])
                {
                    cout << s[i][1];
                }
                else if (s[i][1] != s[i + 1][0])
                {
                    cout << s[i][1] << s[i+1][0];
                    mark = 1;
                }
            }
            cout << s[n-3][1];
            if (mark == 0)
            {
                cout << "a";
            }
            cout << endl;
        }
    }

    return 0;
}

// 7
// ab ba aa ab ba