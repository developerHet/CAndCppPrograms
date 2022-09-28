#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s2, s3;
        cin >> s;
        int i = 0;

        while (i + 1 < n && s[i] != s[i + 1] && s[i] > s[i + 1])
        {
            i++;
        }

        if (i == n)
        {
            i--;
        }

        for (int j = 0; j <= i; j++)
        {
            s2 += s[j];
        }

        for (int j = i; j >= 0; j--)
        {
            s2 += s[j];
        }

        i = 0;

        while (i + 1 < n && s[i] > s[i + 1])
        {
            i++;
        }

        for (int j = 0; j <= i; j++)
        {
            s3 += s[j];
        }

        for (int j = i; j >= 0; j--)
        {
            s3 += s[j];
        }
        
        cout << min(s2, s3) << endl;
    }
    return 0;
}