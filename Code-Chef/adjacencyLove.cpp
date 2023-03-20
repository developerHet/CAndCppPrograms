#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> odd,even,main;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0) {
            even.push_back(x);
        }
        else {
            odd.push_back(x);
        }
    }
    if(odd.size()<=1) {
        cout << -1 << endl;
    }
    else if(odd.size()%2==0) {
        while(!odd.empty()) {
            int x = odd[odd.size()-1];
            cout << x << " ";
            odd.pop_back();
        }
        
        while(!even.empty()) {
            int x = even[even.size()-1];
            cout << x << " ";
            even.pop_back();
        }
        cout << endl;
    }
    else if(odd.size()%2!=0 && even.size()>0) {
        while(!odd.empty() && odd.size()>1) {
            int x = odd[odd.size()-1];
            cout << x << " ";
            odd.pop_back();
        }
        while(!even.empty()) {
            int x = even[even.size()-1];
            cout << x << " ";
            even.pop_back();
        }
        int x = odd[odd.size()-1];
        cout << x << " ";
        odd.pop_back();
        cout << endl;
    }
    else {
        cout << -1 << endl;
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