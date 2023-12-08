#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
    vector<int> v;
    void insert(int val) {
        v.push_back(val);
        int i = v.size()-1;
        while(i>0) {
            int parent = (i-1)/2;
            if(v[parent]<v[i]) {
                swap(v[parent],v[i]);
                i=parent;
            } else {
                return;
            }
        }
    }

    void deleteEle() {
        if(v.empty())  {
            cout << "Heap is empty" << endl;
            return;
        }
        int size = v.size()-1;
        v[0]=v[size];
        v.pop_back();
        size--;
        int i = 0;
        while(i<=size) {
            int left = i*2+1;
            int right = i*2+2;
            int parent = i;
            if(left<=size && v[parent]<v[left]) {
                parent = left;
            }

            if(right<=size && v[parent]<v[right]) {
                parent = right;
            }

            if(i!=parent) {
                swap(v[i],v[parent]);
                i=parent;
            } else {
                return;
            }
        }
    }

    void print() {
        for(int i=0;i<v.size();i++) {
            cout << v[i] << " ";
        } cout << endl;
    }
};

void heapify(vector<int> &v,int i,int size) {
    int left = i*2+1;
    int right = i*2+2;
    int parent = i;
    if(left<=size && v[parent]<v[left]) {
        parent = left;
    }

    if(right<=size && v[parent]<v[right]) {
        parent = right;
    }

    if(parent!=i) {
        swap(v[parent],v[i]);
        heapify(v,parent,size);
    }
}

void heapSort(vector<int> &v) {
    int size = v.size()-1;
    while(size>0) {
        swap(v[0],v[size]);
        size--;
        heapify(v,0,size);
    }
}

int main() {
    heap h;
    h.insert(3);
    h.insert(9);
    h.insert(2);
    h.insert(1);
    h.insert(4);
    h.insert(5);
    // h.print();
    h.deleteEle();
    // h.print();


    // heap creation
    vector<int> v={3,9,2,1,4,5};
    int n = v.size();
    for(int i=n/2-1;i>=0;i--) {
        heapify(v,i,n-1);
    }
    for(int i=0;i<n;i++) {
        cout << v[i] << " ";
    } cout << endl;

    // heap sort
    heapSort(v);
    for(int i=0;i<n;i++) {
        cout << v[i] << " ";
    } cout << endl;
}