#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
 vector<int> diffArray(vector<int>& a){
    int n = a.size();
    vector<int> d(n - 1);

    for(int i = 0; i < n - 1; i++){
        d[i] = a[i + 1] - a[i];
    }

    return d;
 }
 
signed main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n, vector<int>(n));

        vector<int> ones;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>a[i][j];
            }
            int cont = 0;
            for(int j = n - 1; j >= 0; j--){
                if(a[i][j] != 1){
                    break;
                }
                else{
                    cont++;
                }
            }
            ones.push_back(cont);
        }
        
        sort(ones.begin(), ones.end());

        int mex = 1;
        for(int i = 1; i < n; i++){
            if(ones[i] >= mex){
                mex++;
            }
        }
        
        cout<<mex<<endl;
        // for(auto ele : ones)
        //     cout<<ele<<" ";
        // cout<<endl;

    
    }
    
    return 0;
}