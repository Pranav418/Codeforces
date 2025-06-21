#include<bits/stdc++.h>
using namespace std;
#define int long long int

int chips(vector<int> &a){
    vector<int> b;
    int n = a.size();
    int sum = 0;
    for(int i = 1; i < n; i++){
        sum += (a[i] - a[0]);
        b.push_back(a[i] - a[0]);
    }
    if(n == 1)
        return 0;
    
    int ans = sum;
    vector<int> prefix(n, 0);
    prefix[1] = b[0];
    for(int i = 2; i < n; i++){
        prefix[i] = prefix[i - 1] + b[i - 1];
    }
    
    for(int i = 1; i < n; i++){
        int d = a[i] - a[0];
        ans += sum - prefix[i] - d * (b.size() - i);
    }
    return ans;

}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;

        vector<vector<int>> a(m, vector<int>(n));
        

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[j][i];
            }
        }
        int ans = 0;
        for(int j = 0; j < m; j++){
            sort(a[j].begin(), a[j].end());
            ans += chips(a[j]);
        }

        cout<<ans<<endl;

    }
        


    
 
    return 0;
}