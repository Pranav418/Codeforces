#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin>>x>>y>>k;

        int shortest = min(x, y);

        cout<<0<<" "<<0<<" "<<shortest<<" "<<shortest<<endl;
        cout<<0<<" "<<shortest<<" "<<shortest<<" "<<0<<endl;
    }

    

    


    return 0;
}