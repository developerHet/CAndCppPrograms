#include <iostream>
#include <vector>
using namespace std;

bool isPalidrom(int n, vector<int> arr)
{
    bool palindrom = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            palindrom = false;
            break;
        }
    }
    return palindrom;
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        vector<int> arr(n);

        vector<int>::iterator left;
        vector<int>::iterator fLeft;
        left = arr.begin();

        vector<int>::iterator right;
        vector<int>::iterator fRight;
        right = prev(arr.end());

        bool palidrom = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n==1 || n==0 || n==2 || isPalidrom(n, arr))
        {
            cout << "Yes" << endl;
        }
        else
        {
            while (*left == *right)
            {
                left++;
                right--;
            }
            fLeft = left;
            fRight = right;

            int can1 = *left;
            int can2 = *right;
            while (left < right)
            {
                if (*left != *right && *left == can1)
                {
                    left++;
                }
                else if (*left != *right && *right == can1)
                {
                    right--;
                }
                else if (*left == *right)
                {
                    left++;
                    right--;
                }
                else
                {
                    palidrom = false;
                    break;
                }
            }

            if (palidrom)
            {
                cout << "Yes" << endl;
                break;
            }
            else
            {
                left = fLeft;
                right = fRight;
                palidrom = true;
                while (left < right)
                {
                    if (*left != *right && *left == can2)
                    {

                        left++;
                    }
                    else if (*left != *right && *right == can2)
                    {
                        right--;
                    }
                    else if (*left == *right)
                    {
                        left++;
                        right--;
                    }
                    else
                    {
                        palidrom = false;
                        break;
                    }
                }
            }

            if (palidrom)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
