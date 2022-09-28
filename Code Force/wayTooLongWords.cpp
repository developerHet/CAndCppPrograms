#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if(str.length()>10) {
            int count=0;
            for(int i=0;i<str.length()-2;i++) {
                count++;
            }
            cout << str[0] << count << str[str.length()-1] << endl;
        }
        else {
            cout << str << endl;
        }
    }
    return 0;
}