#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
void addElement( int getEle, int x,int orig, int k, vector<int> &ans, vector<int> &arr) {
    int n = arr.size();
    //cout << x << " " << orig << endl;
    ans.push_back(orig);
        k--;
        int left = getEle-1;
        int right = getEle+1;
        while(k--) {
            if(left>=0 && right<n && abs(x-arr[left])<= abs(x-arr[right])) {
                //cout << "left->" << arr[left] << endl;
                ans.push_back(arr[left]);
                left--;
            } else if(left>=0 && right<n && abs(x-arr[left]) > abs(x-arr[right])) {
               //cout << "right->" << arr[right] << endl;
                ans.push_back(arr[right]);
                right++;
            } else if(left>=0) {
               //cout << "left->" << arr[left] << endl;
               ans.push_back(arr[left]);
                left--;
            } else if(right<n) {
                //cout << "right->" << arr[right] << endl;
                ans.push_back(arr[right]);
                right++;
            }
        }
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> ans;
    int n = arr.size();
    int l = 0;
    int r = n-1;

  

    pair<bool,int> getEle;
    getEle.first = false;
    int getEle2 = 0;
    while(l<=r) {
        int mid = (l+r)/2;

        //cout << l << " " << r << " " << mid << endl;
        if(arr[mid]==x) {
            getEle.first = true;
            getEle.second = mid;
            break;
        } else if (arr[mid]<x) {
            l=mid+1;
        } else {
            r=mid-1;
        }
        getEle2 = l;
    }
    if(getEle2 >= n  || (getEle2-1>=0 && abs(x-arr[getEle2])>=abs(x-arr[getEle2-1]))) {
        //cout << abs(x-arr[getEle2]) << " " << abs(x-arr[getEle2-1]);
        getEle2 -=1;
    }


    if(getEle.first) {
        addElement(getEle.second,x,x,k,ans,arr);
    } else {
        //cout << getEle2  << endl;
        addElement(getEle2,x,arr[getEle2],k,ans,arr);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr={3,5,8,10};
    vector<int> ans=findClosestElements(arr,2,15);
    int n = ans.size();
    
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}

