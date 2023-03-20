#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int evenSize = 0;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            evenSize++;
        }
    }

    int oddSize = n-evenSize;


    if (evenSize == 0 || oddSize == 0)
    {
        cout << 0 << endl;
    }
    else if (evenSize >= oddSize)
    {
        if (oddSize % 2 == 0)
        {
            cout << oddSize / 2 << endl;
        }
        else
        {
            cout << evenSize << endl;
        }
    }
    else
    {
        if (oddSize % 2 == 0)
        {
            cout << min(evenSize, oddSize/2) << endl;
        }
        else
        {
            cout << evenSize << endl;
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