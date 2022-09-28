#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void swapColumn(vector<vector<int>> &arr, int n, int i, int j)
{
    for (int k = 0; k < n; k++)
    {
        swap(arr[k][i], arr[k][j]);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arrSorted = -1;

    for (int i = 0; i < n; i++)
    {
        if (!is_sorted(arr[i].begin(), arr[i].end()))
        {
            arrSorted = i;
            break;
        }
    }

    if (arrSorted == -1)
    {
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        vector<vi> sortedGrid = arr;
        vi ansVec;
        for (int i = 0; i < n; i++)
        {
            sort(sortedGrid[i].begin(), sortedGrid[i].end());
        }
        for (int i = 0; i < m; i++)
        {
            if (arr[arrSorted][i] != sortedGrid[arrSorted][i])
            {
                ansVec.push_back(i);
            }
        }

        if (ansVec.size() > 2)
        {
            cout << -1 << endl;
        }
        else
        {
            swapColumn(arr, n, ansVec[0], ansVec[1]);
            bool ans = true;
            for (int i = 0; i < n; i++)
            {
                if (!is_sorted(arr[i].begin(), arr[i].end()))
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
            {
                cout << ansVec[0] + 1 << " " << ansVec[1] + 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
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