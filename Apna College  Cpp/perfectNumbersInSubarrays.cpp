#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectNumber(int n)
{
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                sum += i;
            }
            else
            {
                sum += i + n / i;
            }
        }
    }

    if (sum == n && n != 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int maxSum(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int ans = sum;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        ans = max(ans, sum);
    }

    return ans;
}

int maxPerfectNumber(int arr[], int n, int k)
{
    if (n < k)
    {
        cout << "Invalid Number" << endl;
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (isPerfectNumber(arr[i]))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    return maxSum(arr, n, k);
}

int main()
{
    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    int n = 8;
    cout << maxPerfectNumber(arr, n, k);
    return 0;
}