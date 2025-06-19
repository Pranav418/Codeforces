#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, k;
        cin>>n>>k;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        bool found = false;
        for(int i = 0; i < n; i++){
            if(a[i] == k){
                found = true;
                break;
            }
        }

        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        

    }
        


    
 
    return 0;
}