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

        bool alt = true;

        unordered_map<int, int> hashmap;
        for(int i = 0; i < n; i++){
            hashmap[a[i]]++;
        }

        if(hashmap.size() > 2){
            alt = false;
            cout<<"NO"<<endl;
            continue;
        }
            

        int x = hashmap.begin()->second;

        if(n % 2){
            if(x == n/2 || x == n/2 + 1)
                alt = true;
            else
                alt = false;
        }
        else{
            if(x != n/2)
                alt = false;
        }

        if(alt || hashmap.size() == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    
 
    return 0;
}