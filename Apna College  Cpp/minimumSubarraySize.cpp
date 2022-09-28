#include <iostream>
using namespace std;


minimumSubarraySize(int arr[],int n,int x) {
    int start = 0,end  = 0;
    int sum = 0;
    int minLength = n+1;

    while(end<n) {

        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }

        while (sum > x && start < n)
        {
            if(end-start < minLength) {
                minLength = end-start;
            }
            sum -= arr[start++];
        }
        
    }
    return minLength;
}

int main() {
    int arr[] = {1,4,45,6,10,19};
    int x = 51;
    int n = 6;
    cout << minimumSubarraySize(arr,n,x);
    return 0;
}