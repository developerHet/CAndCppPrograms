#include <iostream>
#include <vector>
using namespace std;

int trapeWater(vector<int> hight) {
    int n = hight.size();
    int left = 1;
    int right = n-2;
    int leftMax = hight[0];
    int rightMax = hight[n-1]; 
    int trapedWater = 0;

    if(hight.size() < 3) {
        return 0;
    }

    while(left<=right) {
        if(rightMax>leftMax) {
            if(leftMax < hight[left]) {
                leftMax = hight[left];
            }
            else {
                trapedWater += leftMax - hight[left];
            }
            left++;
        }
        else
        {
            if(rightMax<hight[right]) {
                rightMax = hight[right];
            }
            else{
                trapedWater += rightMax - hight[right];
            }
            right--;
        }
    }
    return trapedWater;
}

int main() {
    vector<int> hight={0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trapeWater(hight);
    return 0;
}