#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
    long int arr[7];
    for(int i=0;i<7;i++) {
        cin >> arr[i];
    }
    int firstNum = arr[6]-arr[5];
    int secNumb = arr[6]-arr[4];
    int thirdNum = arr[6]-firstNum-secNumb;
    cout << firstNum << " " << secNumb << " " << thirdNum << endl;
    }
    return 0;
}