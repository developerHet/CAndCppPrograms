#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int valid = 0;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s1[i] == s2[i])
            {
                if (valid == 1)
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
            else if (s1[i] > s2[i])
            {
                valid = 0;
            }
            else
            {
                valid = 1;
                count++;
            }
        }
         cout << count << endl;
    }
    return 0;
}