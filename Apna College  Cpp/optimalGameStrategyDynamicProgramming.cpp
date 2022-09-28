#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int dp[100][100];

int ogs(int i, int j) {
    if(i==j) {
        return a[i];
    }
    if(i>j) {
        return 0;
    }
    if(dp[i][j]!=-1) {
        return dp[i][j];
    }
    int c1 = a[i] + min(ogs(i+2,j),ogs(i+1,j-1));
    int c2 = a[j] + min(ogs(i,j-2),ogs(i+1,j-1));
    return dp[i][j]=max(c1,c2);
}

int main() {
    int n;
    cin >> n;
    a = vector<int> (n);
    for(int i=0;i<100;i++) {
        for(int j=0;j<100;j++) {
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << ogs(0,n-1);
    return 0;
}