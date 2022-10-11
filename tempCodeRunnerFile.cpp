int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        vector<int> b(n + 1);
        b[0] = a[0];

        for (int i = 0; i < n - 1; i++)
        {
            b[i + 1] = (a[i] * a[i + 1]);
        }

        b[n] = a[n - 1];

        // for(int i=0;i<=n;i++) {
        //     cout << b[i] << " ";
        // }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(__gcd(b[i], b[i + 1]));
        }

        if (ans == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }