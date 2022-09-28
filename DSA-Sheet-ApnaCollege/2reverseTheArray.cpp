#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

void reverseArray(int arr[],int l,int r) {
    int n = r+1;
    while(l<r) {
        int temp = arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 
void solve() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,0,n-1);
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}