#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = i + 1;
            arr[i + 1] = arr[i] * 2;
            cout << arr[i] << " " << arr[i + 1] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = i + 1;
        }
        for (int i = 1; i < n; i += 2)
        {
            arr[i] = arr[i - 1] * 2;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
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