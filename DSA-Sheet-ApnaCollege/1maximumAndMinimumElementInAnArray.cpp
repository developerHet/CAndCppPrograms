#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Pair
{
    int min;
    int max;
};


Pair linearSearch(int arr[],int n) {
    struct Pair minmax;
    if(n==1) {
        minmax.max = arr[0];
        minmax.min = arr[0];
    } else {
        if(arr[0]>arr[1]) {
            minmax.max = arr[0];
            minmax.min = arr[1];
        } else {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }

        for(int i=2;i<n;i++) {
            if(arr[i]>minmax.max) {
                minmax.max = arr[i];
            }
            if(arr[i]<minmax.min) {
                minmax.min = arr[i];
            }
        }
    } 
    return minmax;
}

Pair devideSearch(int arr[],int l, int r) {
    struct Pair minmax;
    if(l==r) {
        minmax.max = arr[l];
        minmax.min = arr[l];
        return minmax;
    }
    if(r==l+1) {
        if(arr[l]>arr[r]) {
            minmax.max = arr[l];
            minmax.min = arr[r];
        } else {
            minmax.max = arr[r];
            minmax.min = arr[l];
        }
        return minmax;
    }
    int mid = (l+r)/2;
    struct Pair mml=devideSearch(arr,l,mid);
    struct Pair mmr=devideSearch(arr,mid+1,r);

    if(mml.min<mmr.min) {
        minmax.min=mml.min;
    } else {
        minmax.min=mmr.min;
    }

    if(mml.max>mmr.max) {
        minmax.max=mml.max;
    } else {
        minmax.max=mmr.max;
    }
    return minmax;
}

void solve()
{
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = 6;

    struct Pair minMax1= linearSearch(arr,arr_size);
    cout << minMax1.max << endl;
    cout << minMax1.min << endl;


    struct Pair minMax2 = devideSearch(arr,0,arr_size-1);
    cout << minMax2.max << endl;
    cout << minMax2.min << endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}