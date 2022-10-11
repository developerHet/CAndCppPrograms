if(countA>countB) {
            int j = countA-countB;
            //cout << j << endl;
            for(int i=0;i<n && j>0;i++) {
                if(b[i]!=a[i] && b[i]==0) {
                    b[i]=1;
                    //cout << i << endl;
                    j--;
                }
            }
            if(a==b) cout << countA-countB << endl;
            else cout << countA-countB+1 << endl;
        } else {
            int j = countB-countA;
            for(int i=0;i<n && j>0;i++) {
                if(b[i]!=a[i] && a[i]==0) {
                    a[i]=1;
                    j--;
                }
            }
            if(a==b) cout << countB-countA;
            else cout << countB-countA+1 << endl;
        }