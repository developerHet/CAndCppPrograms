#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, s;
        cin >> a >> s;
        long long count = 1;
        long long ans = 0;
        bool mark = true;
        while (s > 0)
        {
            if (a % 10 == s % 10)
            {
                long long num = 0;
                ans = ans + (count * num);
                count *= 10;
                a = a / 10;
                s = s / 10;
            }
            else if (a % 10 > s % 10)
            {
                if (s % 100 >= 10 && s % 100 <= 18)
                {
                    long long num = (s % 100) - (a % 10);
                    ans = ans + (count * num);
                    count *= 10;
                    a = a / 10;
                    s = s / 100;
                }
                else
                {
                    mark = false;
                    break;
                }
            }
            else
            {
                long long num = (s % 10) - (a % 10);
                ans = ans + (count * num);
                count *= 10;
                a = a / 10;
                s = s / 10;
            }
        }
        if (a == s && mark == true)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}