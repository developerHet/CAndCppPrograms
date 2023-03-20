#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll MOD=1000000007;
 
 
 
void solve() {
    int n;
    cin >> n;
    vi time(n-1,0);
    for(int i=0;i<n-1;i++) {
        cin>> time[i];
    }
    vi aTime(n-1,0);
    for(int i=0;i<n-1;i++) {
        if(i==0) {
            aTime[i]=time[i];
        } else {
            aTime[i]=aTime[i-1]+time[i];
        }
    }
  
    vi bTime(n-1,0);
    for(int i=0;i<n-1;i++) {
        if(i==0) {
            bTime[i]=aTime[i]*2;
        } else {
            
            if(bTime[i-1]<aTime[i]) {
                bTime[i]=time[i]+aTime[i];
            } else {
                bTime[i] = bTime[i-1]+time[i];
            }
        }
    }
    
    cout << bTime[n-2] << endl;
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