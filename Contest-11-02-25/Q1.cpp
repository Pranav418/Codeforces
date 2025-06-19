#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int x, y;
        cin>>x>>y;

        if( (x % 9 == (y - 1) % 9 ) && (x + 1 >= y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
        


    
 
    return 0;
}