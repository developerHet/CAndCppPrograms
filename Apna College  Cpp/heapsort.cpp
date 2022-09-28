#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr,int curr,int size) {
    int left = curr*2+1;
    int right = curr*2+2;
    int largest = curr;
    if(left < size && arr[left] > arr[largest]) {
        largest = left;
    }

    if(right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    if(largest != curr) {
        int temp = arr[largest];
        arr[largest] = arr[curr];
        arr[curr] = temp;
        heapify(arr,largest,size);
    }
}

void heapsort(vector<int> &arr){

    int n=arr.size();

    for(int i=n/2-1;i>=0;i--) {
        heapify(arr,i, arr.size());
    }

    for(int i=arr.size()-1;i>0;--i) {
        int temp = arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapify(arr,0,i);
    }
}

int main() {
    vector<int> arr{3,6,5,0,8,2,1,9};
    heapsort(arr);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    return 0;
}