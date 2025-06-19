#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int l ,r ,k;
        cin>>l>>r>>k;

        if(r/k < l)
            cout<<0<<endl;
        else{
            cout<<(r/k - l + 1)<<endl;
        }


    }
    return 0;
}