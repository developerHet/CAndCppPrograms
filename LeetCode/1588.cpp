#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size();
    int ans = 0;
    for(int i=0;i<n;i++) {
        int start = n-i;
        int end = i+1;
        int occar = start*end;
        if(occar%2==1) {
            occar++;
        }
        occar/=2;
        ans+=(occar*arr[i]);
    }
    return ans;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi arr={1,4,2,5,3};
    cout << sumOddLengthSubarrays(arr);
    return 0;
}