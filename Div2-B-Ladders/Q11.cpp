#include<bits/stdc++.h>
using namespace std;
// #define int long long int
signed main(){
    long long int r, x, y, x1, y1;
    cin>>r>>x>>y>>x1>>y1;

    double d = sqrt( (x - x1) * (x - x1) + (y - y1) * (y - y1) );
    long long int ans = 0;
    while(d >= 2*r){
        // cout<<d<<" "<<r<<endl;
        ans++;
        d -= 2*r;
    }

    if(d > 0)
        ans++;
    
    cout<<ans<<endl;


    



    return 0;
}