#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mnv( vector<vector<int>>& a, int i, int j, int n){
    int MNV = 0;

    while(i < n && j < n){
        MNV = min(MNV, a[i][j]);
        i++;
        j++;
    }

    return -MNV;
}

signed main(){

// for (int t = 0; t < 3; t++) {
//     cout << N << '\n';
//     for (int i = 1; i <= N; i++) {
//       cout << "53201" << " \n"[i == N];
//     }
//   }

    int t;
    cin>>t;



    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        map<int, int> hashmap;

        hashmap[0] = -1;
        int limit = -1;
        int ans = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            
            if(hashmap.find(sum) != hashmap.end() && hashmap[sum] >= limit){ // limit later
                ans++;
                limit = i;
                }
            
            
            hashmap[sum] = i;
            
        }

        cout<<ans<<endl;

    }
    return 0;
}