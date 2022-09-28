#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
long long minimumRemoval(vector<int> &v) {
     sort(v.begin(),v.end());
    long long n = v.size();
    long long sum=0;
    for(long long i=0;i<n;i++) {
        sum+=v[i];
    }
    long long ans = 1e18;
    for(long long i=0;i<n;i++) {
        long long change = sum-(long long)v[i]*(n-i)*1LL;
        ans = min(ans,change);
    }
    return ans;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v={2,10,3,2};
	cout << minimumRemoval(v);
    return 0;
}