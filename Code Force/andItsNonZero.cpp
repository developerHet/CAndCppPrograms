#include <bits/stdc++.h>
using namespace std;
vector<array<int,20>>A(300000);
void Solve(){
    int l,r;
    cin >> l >> r;
    int ans = INT_MAX;
    for(int i=0;i<20;i++){
        // cout<<A[r][i]<<" "<<A[l-1][i]<<endl;
        ans = min(ans , A[r][i] - A[l-1][i]);
    }
    cout<<ans<<endl;
    return ;
}

int main() {
    for(int i=1;i<300000;i++){0.
        for(int j=0;j<20;j++){
            if(i&(1<<j)){
                A[i][j] = (i-1 != 0 ? A[i-1][j] : 0);
            }else{
                A[i][j] = (i-1 != 0 ? A[i-1][j] : 0) + 1;
            }
        }
    }
    int t=1;
    cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}