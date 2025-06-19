#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int m, n;
    cin>>m>>n;

    vector<vector<int>> a(m, vector<int>(n));
    vector<vector<int>> b(m, vector<int>(n, 1));
    vector<vector<int>> c(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
        
    unordered_set<int> zerosRows;
    unordered_set<int> zerosCols;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 0){
                zerosRows.insert(i);
                zerosCols.insert(j);
            }
        }
    }

    for(auto index : zerosRows){
        for(int j = 0; j < n; j++){
            b[index][j] = 0;
        }
    }
    
    for(auto index : zerosCols){
        for(int i = 0; i < m; i++){
            b[i][index] = 0;
        }
    }

    c = b;

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    unordered_set<int> onesRows;
    unordered_set<int> onesCols;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] == 1){
                onesRows.insert(i);
                onesCols.insert(j);
            }
        }
    }

    for(auto index : onesRows){
        for(int j = 0; j < n; j++){
            c[index][j] = 1;
        }
    }
    
    for(auto index : onesCols){
        for(int i = 0; i < m; i++){
            c[i][index] = 1;
        }
    }

    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != c[i][j]){
                cout<<"NO";
                return 0;
            }
        }
        
    }

    cout<<"YES"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}