#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
        int n, k;
        cin>>n>>k;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];


        unordered_map<int, int> mp;

        int i = 0, j = 0;
        int ans = 0;
        mp[a[0]]++;
        while(i < n && j < n){
            
            if(mp.size() <= k){
                ans += j + 1 - i;
                j++;
                mp[a[j]]++;
                
                
            }

            if(mp.size() > k){
                mp[a[i]]--;
                if(mp[a[i]] == 0)
                    mp.erase(a[i]);
                i++;
            }
        }
        

        cout<<ans<<endl;
        


    
 
    return 0;
}