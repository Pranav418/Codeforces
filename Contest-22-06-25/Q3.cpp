#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;

        vector<int> a;
        set<int> s;
        int mr = m;
        for(int i = 1; i <= n; i++) s.insert(i);
        for(int i = 1; i <= n; i++){
            
            int x = min(mr - n + i, n + 1 - i);
            mr -= x;
            a.push_back(x);
            if(x == 1)
                break;
        }

        if(m > ((n) * (n + 1))/2 || m < n){
            cout<<-1<<endl;
            continue;
        }
        cout<<a[0]<<endl;
        int u;
        s.erase(a[0]);
        int v;
        for(int i = 0; i < a.size() - 1; i++){
            u = a[i];
            v = a[i + 1];
            s.erase(v);
            cout<<u<<" "<<v<<endl;
        }

        while(!s.empty()){
            u = v;
            v = *s.begin();
            cout<<u<<" "<<v<<endl;
            s.erase(v);
        }


    }
        


    
 
    return 0;
}