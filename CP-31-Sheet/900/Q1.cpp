#include<bits/stdc++.h>
using namespace std;
#define int long long int

int pos(int x){
    if(x < 5)
        return x + 1;
    else
        return 10 - x;
}

signed main(){

    int t;
    cin>>t;
    
    while(t--){    
        int a, b, Kx, Ky, Qx, Qy;
        cin>>a>>b>>Kx>>Ky>>Qx>>Qy;

        int x = abs(Kx - Qx);
        int y  = abs(Ky - Qy);
        // cout<<y<<endl;
        // cout<<2*b<<endl;
        if( ( (abs(a - b) == y || abs(a - b) == x) && ((a + b == x) || (a + b == y))) || (abs(a - b) == x && abs(a - b) == y) ||(2*a == x && 2*b == y) || (2*a == y && 2*b == x) || ((2*a == x || 2 * b == x || 2*a == y || 2*b == y) && (y == 0 || x == 0) ) || (x == a + b) && (y == a + b) ){
            if(a == b && x && y || ((2*a == x && 2*b == y) || (2*a == y && 2*b == x)))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
            cout<<0<<endl;

        

    }
        


    
 
    return 0;
}