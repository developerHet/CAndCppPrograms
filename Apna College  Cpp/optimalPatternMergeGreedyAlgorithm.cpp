#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++) {
        int num;
        cin >> num;
        pq.push(num);
    }
    int ans=0;
    while (pq.size()>1)
    {
        int n1 = pq.top();
        pq.pop();
        int n2 = pq.top();
        pq.pop();
        ans+=n1+n2;
        pq.push(n1+n2);
    }
    cout << ans;
    return 0;
}
