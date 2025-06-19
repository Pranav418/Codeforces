#include<bits/stdc++.h>
using namespace std;
// #define int long long int
signed main(){
    int n, m;
    cin>>n>>m;

    vector<string> lang1(m);
    vector<string> lang2(m);

    for(int i = 0; i < m; i++){
        cin>>lang1[i]>>lang2[i];
    }

    unordered_map<string, string> translate;
    
    for(int i = 0; i < m; i++){
        translate[lang1[i]] = lang2[i];
    }

    vector<string> lecture(n);
    for(int i = 0; i < n; i++){
        cin>>lecture[i];
    }

    for(int i = 0; i < n; i++){
        if(translate[lecture[i]].length() < lecture[i].length())
            cout<<translate[lecture[i]]<<" ";
        else
            cout<<lecture[i]<<" ";
        
    }



    return 0;
}