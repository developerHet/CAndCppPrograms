//using Memoization
/*
const int N = 1e3+3;
vector<int> wt,val;
int dp[N][N];

int knapsack(int n,int w) {
    if(n<=0 || w<=0) {
        return 0;
    }
    if(dp[n][w]!=-1) {
        return dp[n][w];
    }
    if(wt[n-1]>w) {
        return dp[n][w] = knapsack(n-1,w);
    }

    return dp[n][w]=max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+val[n-1]);
}

int main() {
    int n,w;
    cin >> n >> w;
    wt = vector<int> (n);
    val = vector<int> (n);
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++) {
        cin >> val[i];
    }
    for(int i=0;i<n;i++) {
        cin >> wt[i];
    }
    cout << knapsack(n,w);
    return 0;
}
*/

// Using Tabulation