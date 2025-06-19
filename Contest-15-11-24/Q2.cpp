#include <bits/stdc++.h>
using namespace std;
#define int long long int 



signed main(){

    int t;
    cin>>t;

    while(t--){

       int n;
       cin>>n;
        vector<int> a(n+1);

        for(int i = 1; i <= n; i++)
            cin>>a[i];
        
        bool no = false;
        for(int i = 1; i <= n; i++){
            // cout<<a[i]<<" : "<<i<<endl;
            if( abs(a[i] - i) > 1){
                no = true;
                break;
            }
        }
        if(no)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }

  
    
    return 0;
}