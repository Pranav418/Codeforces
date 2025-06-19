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

        map<int, int> map;

        for(int i = 0; i < n; i++)
            map[a[i]]++;

        int ones = 0;

        for(auto ele : map){
            if(ele.second == 1)
                ones++;
        }

        int ans = 2*((ones + 1)/2) + map.size() - ones;

        cout<<ans<<endl;
            

        
    }




    return 0;
}