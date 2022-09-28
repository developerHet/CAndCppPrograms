#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int x;
    int ans=0;
    cin >> x;

    for(int i=0;i<n;i++) {
        ans += x/arr[i];
        x=x%arr[i];
    }
    cout << ans;
    return 0;
}