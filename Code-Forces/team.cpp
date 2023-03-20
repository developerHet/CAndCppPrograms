#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][3];
    for(int i=0;i<n;i++) {
        for(int j=0;j<3;j++) {
            cin >> arr[i][j];
        }
    }
    int sCount=0;
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<3;j++) {
            if(arr[i][j]==1) {
                count++;
            }
        }
        if(count>1) {
            sCount++;
        }
    }
    cout << sCount << endl;
    return 0;
}