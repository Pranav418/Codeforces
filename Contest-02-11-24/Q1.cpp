#include <bits/stdc++.h>
using namespace std;
#define int long long int 


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        bool valid = true;
        for(int i = 0; i < n - 1; i++){
            if(abs(a[i] - a[i+1]) != 5 && abs(a[i] - a[i+1]) != 7){
                cout<<"NO"<<endl;
                    valid = false;
                    break;
            }
            
        }

        if(valid)
              cout<<"YES"<<endl;
    }

  
    
    return 0;
}