#include <iostream>
using namespace std;

int maxSum(int arr[], int n, int k, int x)
{
    int start = 0;
    int end = 0;
    int sum = 0, ans = INT_MIN;
    while (end < n)
    {

        if (end < k)
        {
            sum += arr[end];
            end++;
        }
        else
        {
            sum = sum - arr[start] + arr[end];
            start++;
            end++;
        }

        if (sum < x && end - start == k)
        {
            ans = max(sum, ans);
        }
    }
    return ans;
}

int main()
{
    int arr[] = {7, 5, 4, 6, 8, 9};
    int x = 20;
    int k = 3;
    cout << maxSum(arr, 6, k, x);
    return 0;
}