#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> six = {1, 1, 2, 3, 1, 2};

        if(n == 6){
            for(int i = 0; i < 6; i++)
                cout<<six[i]<<" ";
            cout<<endl;
        }
        else{
            for(int i = 1; i <= n - 2; i++){
                cout<<i<<" ";
            }
            cout<<1<<" "<<2<<" ";
            cout<<endl;
        }

        


        
    }

    

    
    return 0;
}