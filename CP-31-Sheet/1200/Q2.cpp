#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int k = 1;
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        bool end = true;
        while(end){
            k *= 2;
            int remainder = a[0] % k;
            for(int i = 0; i < n; i++){
                // cout<<a[i]<<" ";
                if(a[i] % k != remainder){
                    end = false;
                    break;
                }
                
                
                // cout<<endl;
            }
        }

        cout<<k<<endl;

        
       
            

        
    }




    return 0;
}