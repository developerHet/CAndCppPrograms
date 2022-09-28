#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

class Bitset {
private:
vector<int> bit;
int cnt;
bool flipB;
public:
    Bitset(int size) {
        bit.resize(size);
        flipB=false;
        cnt=0;
    }
    
    void fix(int idx) {
        if(!flipB) {
            if(bit[idx]==0) {
                bit[idx]=1;
                cnt++;
            }
        } else {
            if(bit[idx]==1) {
                bit[idx]=0;
                cnt++;
            }
        }
    }
    
    void unfix(int idx) {
        if(!flipB) {
            if(bit[idx]==1) {
                bit[idx]=0;
                cnt--;
            }
        } else {
            if(bit[idx]==0) {
                bit[idx]=1;
                cnt--;
            }
        }
    }
    
    void flip() {
        flipB=!flipB;
        cnt = bit.size()-cnt;
    }
    
    bool all() {
        return cnt==bit.size();
    }
    
    bool one() {
        return cnt>=1;
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
        string ans="";
        if(!flipB) {
            for(auto i: bit) {
                if(i==0) ans+='0';
                else ans+='1';
            }
        } else {
            for(auto i: bit) {
                if(i==1) ans+='0';
                else ans+='1';
            }
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Bitset *bs = new Bitset(5);
    bs->fix(3);     // the value at idx = 3 is updated to 1, so bitset = "00010".
    bs->fix(1);     // the value at idx = 1 is updated to 1, so bitset = "01010".
    bs->flip();     // the value of each bit is flipBped, so bitset = "10101".
    cout << bs->all() << endl;      // return False, as not all values of the bitset are 1.
    bs->unfix(0);   // the value at idx = 0 is updated to 0, so bitset = "00101".
    bs->flip();     // the value of each bit is flipBped, so bitset = "11010".
    cout << bs->one() << endl;      // return True, as there is at least 1 index with value 1.
    bs->unfix(0);   // the value at idx = 0 is updated to 0, so bitset = "01010".
    cout << bs->count() << endl;    // return 2, as there are 2 bits with value 1.
    cout << bs->toString() << endl; // return "01010", which is the composition of bitset.
    return 0;
}