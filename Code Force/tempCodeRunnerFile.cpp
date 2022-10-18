int n;
    cin >> n;
    vi a(n+1);
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    vi diff;
    diff.push_back(0);
    for(int i=2;i<=n;i++) {
        diff.push_back(a[i]-a[i-1]);
    }


    vi ans;
    int i = diff.size();
    int j = 1;
    while(i>=1) {
        if(diff[i]<=0) {
            while(j<n && abs(diff[i])>=j) {
                ans.push_back(i+1);
                if(abs(diff[i])==j) {ans.push_back(i+1);j++;}
                j++;
            }
        }
        i--; 
    } cout << endl;

    while(ans.size()<n) {
        ans.push_back(1);
    }

    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }