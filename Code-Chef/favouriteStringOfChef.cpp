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
        string s;
        cin >> s;
        int p1 = s.find("code");
        // cout << p1 << endl;
        int p2 = s.find("chef");
        if (p1 < p2)
        {
            cout << "AC" << endl;
        }
        else
        {
            cout << "WA" << endl;
        }
    }
    return 0;
}