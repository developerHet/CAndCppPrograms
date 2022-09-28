#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int w, n;
    cin >> w >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [&](pair<int, int> p1, pair<int, int> p2)
         {
             double vw1 = (double)p1.first / p1.second;
             double vw2 = (double)p2.first / p2.second;
             return vw1 > vw2;
         });

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (w >= a[i].second)
        {
            ans += a[i].first;
            w -= a[i].second;
        }
        else
        {
            double vw = (double)a[i].first / a[i].second;
            ans += w * vw;
            w = 0;
            break;
        }
    }
    cout << ans;
    return 0;
}