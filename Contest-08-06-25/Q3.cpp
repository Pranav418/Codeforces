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

        
        map<int, int> old, curr;

        int ans = 1;

        old[a[0]]++;

        for(int i = 1; i < n; i++){
            if(curr.find(a[i]) == curr.end())
                curr[a[i]]++;
            
            if(old.find(a[i]) != old.end()){
                old[a[i]]--;
                if(old[a[i]] == 0){
                    old.erase(a[i]);
                }

                if(old.size() == 0){
                    ans++;
                    swap(old, curr);
                }
            }
        }

        cout<<ans<<endl;



    }
        


    
 
    return 0;
}