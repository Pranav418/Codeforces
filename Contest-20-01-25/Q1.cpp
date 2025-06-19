#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        int odd = 0;
        int even = 0;

        for(int i = 0; i < n; i++){
            if(a[i] % 2){
                odd++;
            }
            else{
                even++;
            }
        }

        if(even > 0){
            cout<<1 + odd<<endl;
        }
        else
            cout<<odd - 1<<endl;



        
    }
    
 
    return 0;
}