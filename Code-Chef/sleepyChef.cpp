#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int zeroFlag = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zeroFlag++;
            }
            else if (s[i] == '1')
            {
                zeroFlag = 0;
            }

            if (zeroFlag == k)
            {
                zeroFlag = 0;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}