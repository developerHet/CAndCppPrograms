#include <iostream>
using namespace std;

void formNumberDivisibleByThree(int arr[],int n,int k) {
    int sum = 0;
    pair<int, int> ans;

    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }

    bool found = false;

    if(sum%3 == 0) {
        ans = make_pair(0,k-1);
        found = true;
    }

    for(int i=k;i<n;i++) {
        if(found) {
            break;
        }
        sum += arr[i] - arr[i-k];
        if(sum%3==0) {
            ans = make_pair(i-k+1,i);
            found = true;
            break;
        }
    }

    if(!found) {
        ans = make_pair(-1,0);
    }
    if(ans.first == -1) {
        cout << "no such subarry exist" << endl;
    }
    else {
        for(int i=ans.first; i <= ans.second; i++) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {84,23,45,12,56,82};
    int n = 6;
    int k = 3;
    formNumberDivisibleByThree(arr,n,k);
    return 0;
}