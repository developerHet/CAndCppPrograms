#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()
#define endl "\n"

const double PI=3.141592653589;


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "LINE(" << __LINE__ << ") -> " <<"[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
 
 
 
void solve() {
    ll n;
    cin >> n;
    vector<long long> a(n);
    for(ll i=0;i<n;i++) {
        cin >> a[i];
    }
    vector<long long> pre(n);
    pre[0]=a[0];
    for(ll i=1;i<n;i++) {
        pre[i]=(pre[i-1]|a[i]);
    }
    vector<long long> suff(n);
    suff[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--) {
        suff[i]=(suff[i+1]|a[i]);
    }
    ll mx = *max_element(all(pre));
    ll l,r=-1;
    for(ll i=0;i<n;i++) {
        if(suff[i]==mx && pre[i]==mx) {
            l=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--) {
        if(suff[i]==mx && pre[i]==mx) {
            r=i;
            break;
        }
    }
    
    if(l==r) {
        ll xt = 0;
        for(ll i=0;i<n;i++) {
            if(i!=l) {
                xt|=a[i];
            }
        }
        if(xt==a[l]) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        cout << r << endl; 
    }
}
 
 
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}