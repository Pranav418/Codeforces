#include <bits/stdc++.h>
using namespace std;
#define int long long int 


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int value = 1;
        for(int i = 0; i < n; i++){
            cout<<value<<" ";
            value += 2;
        }
        cout<<endl;
    }

  
    
    return 0;
}