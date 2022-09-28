#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int left = -1;
    int i=1;
    while(i<n && arr[i]==i) {
        cout << arr[i] << " ";
        i++;
    }
    left=i;
    while(i<=n && left!=arr[i]) {
        i++;
    }
    int right = i;
    for(int j = right; j>=left ; j--) {
        cout << arr[j] << " ";
    }

    for(int j = right+1; j<=n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
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