#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n, x;
        cin>>n>>x;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        bool used = false;
        bool exists = true;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                if(!used){
                    used = true;
                    i += x - 1;
                }
                else{
                    exists = false;
                    break;
                }
                
            }
        }

        if(exists)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
        


    
 
    return 0;
}