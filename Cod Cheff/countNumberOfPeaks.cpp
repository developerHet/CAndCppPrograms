#include <bits/stdc++.h>
using namespace std;

int extrema(int a[], int n)
{
    int count = 0;

    for (int i = 1; i < n - 1; i++)
    {

        count += (a[i] > a[i - 1] && a[i] > a[i + 1]);
        count += (a[i] < a[i - 1] && a[i] < a[i + 1]);
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        long int num = pow(3, n);
        for (int j = num; j >= 0; j--)
        {
            int k = j;
            int a[n] = {0};
            int i = n - 1;
            while (k > 0)
            {
                a[i] = k % 3;
                
                k /= 3;
                i--;
            }
            count += extrema(a, n);
        }
        cout << count << endl;
    }
}
