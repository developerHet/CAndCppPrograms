#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

//lis
    int lis[n];
    
    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] >= a[j])
            {
                mx = max(mx,lis[j]);
            }
        }
        lis[i] = 1+mx;
    }


//lds
    int lds[n];

    for (int i = n-1; i >=0 ; i--)
    {
        int mx=0;
        for (int j = n-1; j > i; j--)
        {
            if (a[i] >= a[j])
            {
                mx = max(mx,lds[j]);
            }
        }
        lds[i] = 1+mx;
    }

    
//lbs

    for (int i=0;i<n;i++) {
        cout << lis[i] << " " << lds[i] << endl;
    }
    return 0;
}