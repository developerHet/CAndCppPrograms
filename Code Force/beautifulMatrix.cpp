#include <iostream>
using namespace std;

int main() {
    int a[5][5];
    int row,col;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> a[i][j];
            if(a[i][j]==1) {
                row=i;
                col=j;
            }
        }
    }
    int moves=0;
    while(row!=2) {
        if(row<2) {
            row++;
        }
        else if(row>2) {
            row--;
        }
        moves++;
    }
    while(col!=2) {
        if(col<2) {
            col++;
        }
        else if(col>2) {
            col--;
        }
        moves++;
    }
    cout << moves  << endl;
}