#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

int cost(string& s){
    char c = '0';
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            ans++;
        }
        else{
            c = (char)(('1' - c) + '0');
            ans+=2;
        }
    }

    return ans;
}

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        int diff = 0;
        if(s[0] == '1'){
            // cout<<"THIS"<<endl;
            
            bool started = false;
            bool ended = false;
            int index = -1;
            string p;
            for(int i = 1; i < n; i++){
                if(s[i] == '0' || started){
                    started = true;
                    
                    if(s[i] == '1'){
                        diff--;
                        break;
                    }
                }
            }
            if(started)
                diff--;


            cout<<diff + cost(s)<<endl;
        }
        else{
            bool started = false;
            bool ended = false;
            int index = -1;

            for(int i = 1; i < n; i++){
                if(s[i] == '1' || started){
                    started = true;
                    
                    if(s[i] == '0' || ended){
                        
                        ended = true;
                        if(s[i] == '1'){
                            diff--;
                            break;
                        }
                    }
                }
            }
            if(ended)
                diff--;

            cout<<diff + cost(s)<<endl;
        }


        
        
    }



    


    return 0;
}