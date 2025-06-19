#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n;
        cin>>n;
        set<int> s;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        int gcd = a[0];
        for(int i = 1; i < n; i++)
            gcd = __gcd(a[i], gcd);
        
        int oneCount = 0;
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
            if(a[i] == 1)
                oneCount++;
        }

        if(s.size() == 1){
            cout<<0<<endl;
            continue;
        }
        cout<<"GCD: "<<gcd<<endl;
        if(gcd == 1){
            cout<<n - oneCount<<endl;
        }
        else{
            int gcdCount = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == gcd)
                    gcdCount++;
            }
            if(gcdCount){
                cout<<n - gcdCount<<endl;
            }
            else{
                cout<<n + 1<<endl;
            }
            
        }
        
        


    }
        


    
 
    return 0;
}