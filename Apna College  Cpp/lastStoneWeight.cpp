#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int lastStoneWeight(vector<int> a) {
    int n = a.size();
    priority_queue<int,vector<int>> pq;
    for(int i=0;i<n;i++) {
        pq.push(a[i]);
    }
    int first,second;
    while(n>1) {
        first = pq.top();
        pq.pop();
        second = pq.top();
        pq.pop();
        n-=2;
        if(first-second > 0) {
            pq.push(first-second);
            n+=1;
        }
    }
    if(!pq.empty()){
        return pq.top();
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << lastStoneWeight(a);
    return 0;
}