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

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        map<int, int> map;

        for(int i = 0; i < n; i++)
            map[a[i]]++;

        vector<int> prefix(n);
        prefix[n - 1] = a[n - 1];

        for(int i = n - 2; i >= 0; i--){
            prefix[i] = prefix[i + 1] + a[i];
            // cout<<prefix[i]<<" "; 
        }
        // cout<<endl;

        for(int i = n - 1; i >= 0; i--){
            int x = a[i];
            map[a[i]]--;
            if(map[a[i]] == 0){
                map.erase(a[i]);
            }
            // cout<<"A"<<endl;
            if(map.size() > 0){
                int m = map.rbegin()->first;
                // cout<<"m"<<endl;
                if(m > a[i]){
                    prefix[i] += m - a[i];
                }
            }
                
        }

        for(int i = n - 1; i >= 0; i--){
            cout<<prefix[i]<<" ";
        }
        cout<<endl;

        



    }
        


    
 
    return 0;
}