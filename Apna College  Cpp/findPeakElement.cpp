#include <iostream> 
using namespace std;

int findPeakElement(int arr[],int n,int left,int right) {
    int mid = left+(right-left)/2;

    if((mid==0 || arr[mid-1] < arr[mid]) && (mid==n-1 || arr[mid+1] < arr[mid])) {
        return mid;
    }
    else if(mid>0 && arr[mid-1] > arr[mid]) {
        return findPeakElement(arr,n,left,mid-1);
    }
    else {
        return findPeakElement(arr,n,mid+1,right);
    }
}

int main() {
    int arr[] = {0,1,2,3,4,10};
    cout << findPeakElement(arr,6,0,5);
    return 0;
}