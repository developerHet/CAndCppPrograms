#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(int arr[], int n, int k, int mid)
{
    int pos = arr[0];
    int element = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            element++;
            if (element == k)
            {
                return true;
            }
        }
    }
    return false;
}

int distance(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int left = 1;
    int right = arr[n - 1];
    int result = INT_MIN;

    while (left < right)
    {
        int mid = (right + left) / 2;
        if (isValid(arr, n, k, mid))
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    cout << distance(arr, 5, 3);
    return 0;
}