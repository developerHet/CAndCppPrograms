#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    map<int,int> m;
    int sum=0;
    int ans=0;
    m[0] = 1;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(m.find(sum) != m.end()) {
            ans += m[sum];
        }
        m[sum]++;
    }
    cout << ans;
    return 0;
}