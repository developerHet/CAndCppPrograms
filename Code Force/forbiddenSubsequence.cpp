#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        string s, t, s1;
        cin >> s >> t;
        sort(s.begin(), s.end());
        int mark = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                mark++;
                break;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                mark++;
                break;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'c')
            {
                mark++;
                break;
            }
        }

        if (t == "abc" && mark == 3)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'a')
                {
                    s1 = s1 + "a";
                }
            }
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'c')
                {
                    s1 = s1 + "c";
                }
            }
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != 'a' && s[i] != 'c')
                {
                    s1 = s1 + s[i];
                }
            }
            cout << s1 << endl;
        }
        else
        {

            if (mark == 3)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == 'a')
                    {
                        s1 = s1 + "a";
                    }
                }
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == 'b')
                    {
                        s1 = s1 + "b";
                    }
                }
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] != 'a' && s[i] != 'b')
                    {
                        s1 = s1 + s[i];
                    }
                }

                cout << s1 << endl;
            }
            else
            {
                cout << s << endl;
            }
        }
    }
    return 0;
}


