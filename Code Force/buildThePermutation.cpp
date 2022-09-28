#include <bits/stdc++.h>
using namespace std;

void swap(int left, int right, int arr[])
{
    int k = arr[left];
    arr[left] = arr[right];
    arr[right] = k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int flag = 0;
        int arr[n + 1];
        arr[n] = 0;
        int one = 1;
        for (int i = 0; i < n; i++)
        {
            arr[i] = one++;
        }

        if (n % 2 == 0 && ((n - 1) / 2 >= a && (n - 1) / 2 >= b))
        {
            if (a >= b)
            {
                int flag=0;
                int left = 1;
                int right = 2;

                while (arr[left] != 0 && arr[right] != 0 && flag!=a)
                {
                    swap(left, right, arr);
                    left += 2;
                    right += 2;
                    flag++;
                }
            }
            else if (b > a)
            {
                int flag=0;
                int left = 0;
                int right = 1;

                while (arr[left] != 0 && arr[right] != 0 && flag!=b)
                {
                    swap(left, right, arr);
                    left += 2;
                    right += 2;
                    flag++;
                }
            }
        }
        else if (n % 2 != 0 && ((n / 2 >= a && n / 2 > b) || (n / 2 >= b && n / 2 > a)))
        {
            if (a >= b)
            {
                int left = 1;
                int right = 2;
                int flag=0;

                while (arr[left] != 0 && arr[right] != 0 && flag!=a)
                {
                    swap(left, right, arr);
                    left += 2;
                    right += 2;
                    flag++;
                }
            }
            else if (b > a)
            {
                int left = 0;
                int right = 1;
                int flag=0;

                while (arr[left] != 0 && arr[right] != 0 && flag!=b)
                {
                    swap(left, right, arr);
                    left += 2;
                    right += 2;
                    flag++;
                }
            }
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

