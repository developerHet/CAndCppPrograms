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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = abs(arr[i]);
        }
        map<int, int> occr;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0 && occr[0] == 0)
            {
                occr[arr[i]]++;
                count++;
            }
            else if (arr[i] == 0)
            {
                continue;
            }
            else if (occr[arr[i]] == 0 || occr[arr[i]] == 1)
            {
                occr[arr[i]]++;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}