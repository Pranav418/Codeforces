#include<bits/stdc++.h>
using namespace std;
#define int long long int

void next(int x, int cells, int n, int m){
    int i = cells / m;
    int j = (cells % m);
    // cout<<"START: "<<i<<" "<<j<<endl;
    for(; i < n; i++){
        for(; j < m; j++){
            if(x == 0){
                // cout<<"DONE"<<endl;
                return;
            }
            // cout<<x<<" :X"<<endl;
            x--;
            if(i % 2 == 0)
                cout<<i + 1<<" "<<j + 1<<" ";
            else
                cout<<i + 1<<" "<<m - j<<" ";
            
        }
        j = 0;
    }
}

signed main(){
    int n, m, k;
    cin>>n>>m>>k;

    int cells = 0;
    while(k--){
        if(k == 0){
            cout<<n*m - cells<<" ";
            next(n*m - cells, cells, n, m);
            cout<<endl;
        }
        else{
            cout<<2<<" ";
            next(2, cells, n, m);
            cells += 2;
            cout<<endl;
        }
    }
    

    


    return 0;
}