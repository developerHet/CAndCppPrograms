#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    vi b = a;
    sort(b.begin(), b.end());
    

    if(n==-1) {
        cout << -1 << endl;
    } else if(n%2==0) {
        int i = 0;
        while(i<n) {
            if(a[i]!=b[i]) {
                a[i]=b[i];
                i++;
            } else {
                if(i==n-1) {
                    a[n-1]=b[n-2];
                    a[n-2]=b[n-1];
                    i+=2;
                } else {
                    a[i]=b[i+1];
                    a[i+1] = b[i];
                }
            }
        }
    } else {
        int i=0;
        while(i<n) {
            if(a[i]!=b[i]) {
                a[i]=b[i];
                i++;
            } else {
                
                if(i==n-1 || i==n-2 || i==n-3) {
                   
                    a[n-3]=b[n-2];
                    a[n-2]=b[n-1];
                    a[n-1]=b[n-3];
                    i+=3;
                } else {
                    a[i]=b[i+1];
                    a[i+1] = b[i];
                    i+=2;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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