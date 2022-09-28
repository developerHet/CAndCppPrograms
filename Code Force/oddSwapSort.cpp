#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> even,odd;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        if(x%2==0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }
    vector<int> sortEven = even;
    vector<int> sortOdd = odd;
    sort(sortEven.begin(), sortEven.end());;
    sort(sortOdd.begin(),sortOdd.end());
    if(even==sortEven && odd==sortOdd) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}