#include <bits/stdc++.h>
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
        

        map<int, int> hashmap;

        for(int i = 0; i < n; i++){
            hashmap[a[i]]++;
        }

        int maxi = 0;
        for(auto ele : hashmap){
            maxi = max(ele.second, maxi);
        }

        cout<<n - maxi<<endl;


    }

  
    
    return 0;
}