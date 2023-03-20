#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        while (p--)
        {
            x += 10;
        }
        while (q--)
        {
            y += 10;
        }
        if (x > y)
        {
            cout << "Chefina" << endl;
        }
        else if (y > x)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}