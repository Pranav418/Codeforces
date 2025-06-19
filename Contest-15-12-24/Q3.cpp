#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;

    while(t--){
        int m, a, b, c;
        cin>>m>>a>>b>>c;

        int A = min(a, m);
        int B = min(b, m);
        int R = 2*m - A - B;

        int C = min(c, R);

        cout<<A + B + C<<endl;
        

    }



    


    return 0;
}