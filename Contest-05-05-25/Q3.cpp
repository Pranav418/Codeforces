#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

       
        bool allZero = true;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                allZero = false;
                break;
            }
                
        }
        if(allZero){
            
            cout<<"YES"<<endl;
            cout<<k<<" ";
            for(int i = 1; i < n; i++)
                cout<<0<<" ";
            continue;
        }

        string p = s;
        auto it = unique(p.begin(), p.end());
    
        p.erase(it, p.end());

        if(count(p.begin(), p.end(), '1') == 1){
            if(p.length() > 1){
                int sum = 0;
                for(int i = 0; i < n; i++){
                    sum += a[i];
                }
                if(sum <= k){
                    cout<<"YES"<<endl;
                    bool set = false;
                    for(int i = 0; i < n; i++){
                        if(s[i] == '0'){
                            if(!set){
                                set = true;
                                cout<<k - sum<<" ";
                            }
                            else
                                cout<<0<<" ";
    
                            
                        }
                        else{
                            cout<<a[i]<<" ";
                        }
                    }
                    cout<<endl;
                }
                    
                else{
                    cout<<"NO"<<endl;
                }
    
                continue;
            }
            
        }






    


    }


    return 0;
}