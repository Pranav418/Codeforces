#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int n, s, t;
    cin>>n>>s>>t;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    vector<int> S(n + 1);

    for(int i = 1; i <= n; i++){
        S[i] = a[i-1];
    }

    vector<bool> visited(n+1, false);
    int current = s;
    int shuffles = 0;
    while(!visited[current]){
        visited[current] = true;
        if(visited[t]){
            cout<<shuffles<<endl;
            return 0;
        }
        current = S[current];

        shuffles++;
    }

    cout<<-1<<endl;




    return 0;
}