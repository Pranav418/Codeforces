#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int t;
    cin>>t;

    while(t--){
        
        int n, k;
        cin>>n>>k;

        vector<int> chest(n);
        for(int i = 0; i < n; i++)
            cin>>chest[i];

        sort(chest.begin(), chest.end(), greater<int>());

        int coins = 0;
        for(int i = 0; i < n; i++){
            if(coins + chest[i] > k){
                break;
            }
            coins += chest[i];
        }

        cout<<k - coins<<endl;
            

        
    }




    return 0;
}