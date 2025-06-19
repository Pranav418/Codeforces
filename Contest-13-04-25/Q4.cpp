#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        string p, s;
        cin>>p>>s;

        int n = p.length();
        int m = s.length();

        int currLp = 0;
        int currRp = 0;

        int currLs = 0;
        int currRs = 0;

 

        if(p[0] != s[0]){
            cout<<"NO"<<endl;
            continue;
        }
        int currCharP = p[0];
        int currCharS = s[0];
        bool NO = false;

        vector<int> f;
        vector<int> g;

        int curr = 1;
        for(int i = 1; i < p.size(); i++){
            if(p[i] != currCharP){
                f.push_back(curr);
                curr = 1;
                currCharP = p[i];
            }
            else{
                curr++;
            }
            
        }
        f.push_back(curr);

        curr = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] != currCharS){
                g.push_back(curr);
                curr = 1;
                currCharS = s[i];
            }
            else{
                curr++;
            }
            
        }
        g.push_back(curr);
    
        int i = 0, j = 0;

        if(f.size() != g.size()){
            cout<<"NO"<<endl;
            continue;
        }

        for(i = 0; i < f.size(); i++){
            if( (g[i] < f[i]) || (g[i] > 2*f[i]) ){
                NO = true;
                // cout<<"I: "<<i<<endl;
                break;
            }
        }

        //         for(auto ele : f)
        //     cout<<ele<<" ";
        // cout<<endl;
        //             for(auto ele : g)
        //     cout<<ele<<" ";
        // cout<<endl;

        if(!NO)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



        // cout<<endl;

    }
    
    return 0;
}