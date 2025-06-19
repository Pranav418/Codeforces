#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<int> p(n, -1);
        unordered_map<int, int> cow;    

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
                cow[a[i][j]] = i;
            }
        }
        bool exists = true;

        int number = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(p[number % n] == -1)
                    p[number % n] = cow[number];
                else{
                    if(p[number % n] == cow[number]){
                        p[number % n] = cow[number];
                    }
                    else{
                        exists = false;
                        break;
                    }
                }
                number++;
            }
            if(!exists)
                break;
        }

        if(exists){
            for(int i = 0; i < n; i++)
                cout<<p[i] + 1<<" ";
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
            
    }
    
    



 
    return 0;
}