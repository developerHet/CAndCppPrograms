#include <iostream>
using namespace std;

int searchElement(int arr[],int key,int left, int right) {
    if(left> right) {
        return -1;
    }

    int mid = (left+right)/2;
    if(arr[mid]==key) {
        return mid;
    }
    else if(arr[left] < arr[mid]) {
        if(key >= arr[left] && key <= arr[mid]) {
            return searchElement(arr,key,left,mid-1);
        }
        else {
            return searchElement(arr,key,mid+1,right);
        }
    }
    else {
        if(key >= arr[mid] && key <= arr[right] ) {
            return searchElement(arr,key,mid+1,right);
        }
        else {
            return searchElement(arr,key,left,mid-1);
        }
    }
}

int main() {
    int arr[] = {30,40,50,10,20};
    cout << searchElement(arr,50,0,4);
    return 0;
}