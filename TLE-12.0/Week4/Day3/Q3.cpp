#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, k, d;
        cin>>n>>k>>d;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        
        unordered_map<int, int> S;

        

        for(int i = 0; i < d; i++){
            S[a[i]]++;
        }

        int i = 0;
        int j = d;
        int minSub = S.size();

        while(i < n && j < n){
            // cout<<S.size()<<endl;
            S[a[j]]++;
            S[a[i]]--;
            if(S[a[i]] == 0){
                S.erase(a[i]);
            }
            int currSize = S.size();
            minSub = min(currSize, minSub);

            i++;
            j++;
            
        }

        cout<<minSub<<endl;
    }



    
        


    
 
    return 0;
}