#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    set<int> powTwo;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] && (!(arr[i]&(arr[i]-1)))) {
            if(powTwo.find(arr[i])==powTwo.end()) {
               count++;
            }
            powTwo.insert(arr[i]);
        }
    }

    for(int i=0;i<n;i++) {
        while(arr[i]>0) {
            if(powTwo.find(arr[i])!=powTwo.end()) {
                arr[i]=0;
            } else {
                int x  = pow(2,(int)log2(arr[i]));
                if(powTwo.find(x)==powTwo.end()) {
                    count++;
                    powTwo.insert(x);
                }   
              arr[i] -= x;  
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}