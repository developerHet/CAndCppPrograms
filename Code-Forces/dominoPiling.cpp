#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int row=n,col=m;
    int ans=0;
    int rCol;
    while (row!=0)
    {
        col=m;
        while(col>=2) {
            col-=2;
            ans++;
        }
        rCol=col;
        row--;
    }
    row=n*rCol;
    while (row>=2)
    {
        ans++;
        row-=2;
    }
    
    cout << ans << endl;
    return 0;
}