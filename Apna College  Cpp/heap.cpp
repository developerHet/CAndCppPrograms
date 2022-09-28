#include <iostream>
#include <vector>
using namespace std;



void swap(vector<int> &arr,int i,int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void maxHeapify(vector<int> &arr,int idx) {
    int left = 2*idx + 1;
    int right = 2*idx + 2;
    int largest = idx;
    if(left <= arr.size() && arr[left] > arr[idx]) {
        largest = left;
    }
    else {
        largest = idx;
    }

    if(right <= arr.size() && arr[right] > arr[largest]) {
        largest = right;
    }

    if(largest != idx) {
        swap(arr,largest,idx);
        maxHeapify(arr,largest);
    }
}

int extractMax(vector<int> &arr) {
    if(arr.size()<1) {
        return -1;
    }
    int max = arr[0];
    arr[0] = arr[arr.size()-1];
    arr.pop_back();
    maxHeapify(arr,0);
    return max;
}

void increaseKey(vector<int> &arr,int i, int key) {
    if(key<arr[i]) {
        cout << endl << "<--Error-->" << endl;
    }
    else{
        arr[i] = key;
        while(i>0 && arr[(i-1)/2] < arr[i]) {
            swap(arr,(i-1)/2,i);
            i=(i-1)/2;
        }
    }
}

void decreaseKey(vector<int> &arr,int i, int key) {
    if(arr[i]<key) {
        cout << endl << "<--Error-->" << endl;
    }
    else{
        arr[i] = key;
        maxHeapify(arr,i);
    }
}

void buildMaxHeap(vector<int> &arr) {
    for(int i=(arr.size()/2)-1; i>=0; i--) {
        maxHeapify(arr,i);
    }
}

void insertElement(vector<int> &arr, int val){
    arr.push_back(val);
    int i=arr.size()-1;
    while(i>0 && arr[(i-1)/2] < arr[i]) {
            swap(arr,(i-1)/2,i);
            i=(i-1)/2;
        }
}

int main() {
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(0);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(9);

    buildMaxHeap(arr);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } 

    cout << endl << extractMax(arr) << endl;
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } cout << endl;

    increaseKey(arr,6,50);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } cout << endl;

    decreaseKey(arr,1,4);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } cout << endl;

    insertElement(arr,20);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } cout << endl;

    insertElement(arr,60);
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << " "; 
    } cout << endl;
                         
    return 0;
}