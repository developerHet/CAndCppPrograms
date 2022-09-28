#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,x;
    cin >> n >> k >> x;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int day=1;
    int count=0;

    for(int i=x-1;i>=0;i--) {
        count++;
        sum=sum+(arr[i]*day);
        if(count==k) {
            day++;
            count=0;
        }
        
    }
    cout << sum << endl;
    return 0;
}