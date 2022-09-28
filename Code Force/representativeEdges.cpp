#include<bits/stdc++.h>
using namespace std;

int repEdj(vector<int> b) {
    if((int)b.size() <= 2)
        return 0;
    
    int tc = (int)b.size();
    int cost1 = tc;
    for(int i = 0; i < tc - 1; i++) {
        for(int j = i + 1; j < tc; j++) {
            int het = (b[j] - b[i]);
            int cost2 = 0;
            for(int k = 0; k < tc; k++) {
                if(k == i) { continue; }
                if((b[k]*(j-i) + het * (i - k)) != b[i]*(j-i)) { cost2++; }
            }
            if(cost2 < cost1) { cost1 = cost2; }
        }
    }
    return cost1;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int ar[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            v.push_back(ar[i]);
        }
        cout<<repEdj(v)<<endl;
        // cout<<count<<endl;
    }
    return 0;
}