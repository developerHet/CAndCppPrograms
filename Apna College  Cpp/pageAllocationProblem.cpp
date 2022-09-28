#include <iostream>
using namespace std;


bool isValid(int arr[],int n,int k, int max) {

    int studentCount = 1;
    int sum = 0;

    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(sum > max) {
            studentCount++;
            sum = arr[i];
        }
        if(studentCount > k) {
            return false;
        }
    }
    return true;
}

int allocatBook(int arr[],int n,int k) {

    if(n<k) {
        return -1;
    }

    int start = 0, end=0;
    int result = INT_MAX;

    for(int i=0;i<n;i++) {
        end += arr[i];
    }

    while(start<=end) {
        int mid = (start+end)/2;
        if(isValid(arr,n,k,mid)) {
            result = min(mid,result);
            end = mid-1;
        } 
        else {
            start = mid+1;
        }
    }
return result;
}

int main() {
    int arr[] = {12,34,67,90};
    int n = 4;
    int k = 2;

    cout << allocatBook(arr,n,k);
    return 0;
}