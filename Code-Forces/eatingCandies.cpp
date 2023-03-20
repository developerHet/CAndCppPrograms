#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int ans = 0;
    int count = 0;

    int l = 0;
    int r = n - 1;

    int sumL = 0;

    int sumR = 0;

    while (l <= r)
    {
        if (sumL < sumR)
        {
            sumL += arr[l];
            l++;
            count++;
        }
        else if (sumL > sumR)
        {
            sumR += arr[r];
            r--;
            count++;
        }
        else
        {
            if (arr[l] < arr[r])
            {
                sumL += arr[l];
                l++;
                count++;
            }
            else 
            {
                sumR += arr[r];
                r--;
                count++;
            }
        }
        if (sumL == sumR)
        {
            ans = count;
        }
    }

    /*
    if(sumL==sumR) {
        ans=count;
    }


    while(l<=r) {
       // cout << sumL << " " << sumR << endl;
         if(sumL<sumR) {
            while(sumL<sumR) {
                sumL += arr[l];
                l++;
                count++;
            }
        } else {
            while(sumL>sumR) {
                sumR += arr[r];
                r--;
                count++;
            }
        }
        if(sumL==sumR) {
            ans=count;
            if(arr[l]>arr[r]){
            sumL += arr[l];
            l++;
            } else {
                sumL += arr[r];
            r--;
            }
            count++;
        }
    }
    */
    // if(sumL==sumR) {
    //     ans=count;
    // }
    cout << ans << endl;
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