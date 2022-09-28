#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int sum=0;
    int ans=INT_MAX;
    for(int i=0;i<k;i++) {
        sum += arr[i];      
    }
    ans = min(ans,sum);
    for(int i=1;i<n-k+1;i++) {
        sum = sum - arr[i-1] + arr[i+k-1];
        ans = min(ans,sum);
    }
    cout << ans;
    return 0;
}