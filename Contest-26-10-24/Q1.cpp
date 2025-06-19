#include <bits/stdc++.h>
using namespace std;
#define int long long int 


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int W = 0;
        int H = 0;
        int w;
        int h;
        for(int i = 0; i < n; i++){
            cin>>w>>h;
            W = max(w, W);
            H = max(h, H);
        }

        cout<<2*(W + H)<<endl;
    }

  
    
    return 0;
}