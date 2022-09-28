#include <iostream>
using namespace std;

int largest_power(int n)
{
    int sqr = 1;
    while (2 * sqr <= n)
    {
        sqr *= 2;
    }
    return sqr;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int lp = largest_power(n);
        int seclp = lp / 2;
        int ans1 = lp - seclp;
        int ans2 = n - lp + 1;
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}