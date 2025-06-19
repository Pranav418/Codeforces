#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
  
    int n, k;
    cin>>n>>k;

    
    string s;
    cin>>s;

    
    vector<int> hashmap[k];
    for(int i = 0; i < n; i++){
        hashmap[s[i] - 'a'].push_back(i);
    }


    int q;
    cin>>q;
    while(q--){
        string t;
        cin>>t;
        
        bool zero = false;
        vector<int> curr(26, -1);
        int pos = -1;
        for(int i = 0; i < t.size(); i++){
            auto it = upper_bound(hashmap[t[i] - 'a'].begin(), hashmap[t[i] - 'a'].end(), pos);
            if(it == hashmap[t[i] - 'a'].end()){
                zero = true;
                break;
            }

            curr[t[i] - 'a'] = *it;
            pos = *it;

        }
        if(zero){
            cout<<0<<endl;
            continue;
        }
        int minimum = INT_MAX;
        for(int i = 0; i < k; i++){
            char c = (char)(i + 'a');
            
            // cout<<"CHAR: "<<c<<endl;
            auto x = upper_bound(hashmap[c - 'a'].begin(), hashmap[c - 'a'].end(), pos);
            auto y = hashmap[c - 'a'].end();
            minimum = min( (long long)(y - x), minimum);
            //min(hashmap[t[i] - 'a'].end() - upper_bound(hashmap[t[i] - 'a'].begin(), hashmap[t[i] - 'a'].end(), pos), minimum);
        }
        cout<<minimum + 1<<endl;

    }

        



    
        


    
 
    return 0;
}