#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1;
    int n = (s1.length()+1)/2;
    int pos=0;
    int a[n];
    for(int i=0;i<s1.length();i++) {
        if (s1[i]=='+')
        {
            continue;
        }
        else
        {
            a[pos]=s1[i]-'0';
            pos++;
        }
        
    }
    sort(a,a+pos);
    for(int i=0;i<pos;i++) {
        if(i!=pos-1) {
            s2=s2+to_string(a[i])+"+";
        }
        else {
            s2=s2+to_string(a[i]);
        }
    }
    cout << s2;
    return 0;
}