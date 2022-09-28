#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrom(int n) {
    int number = 0;
    int temp = n;
    while(0<temp) {
        number = number*10 + temp%10;
        temp=temp/10;
    }
    if(number == n) {
        return true;
    }
    return false;
}

int subarrayPalindrom(int arr[],int n,int k) {
    int num = 0;
    for(int i=0;i<k;i++) {
        num = num*10 + arr[i];
    }

    if(isPalindrom(num)) {
        return 0;
    }

    for(int i=k; i<n; i++) {
        num = num%(int)pow(10,k-1)*10 + arr[i];

        if (isPalindrom(num)) {
            return i-k+1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2,3,5,1,1,5};
    int k = 4;
    int ans = subarrayPalindrom(arr,6,4);
    if(ans==-1) {
        cout << "Palindrom is not present" << endl;
    }
    else {
        for (int i=ans;i<ans+k;i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}