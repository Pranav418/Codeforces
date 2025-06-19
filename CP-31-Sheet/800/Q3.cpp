#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        string s;
        cin>>n>>s;
        int empty = 0;
        int sequence = 0;
        int maxSquence = 0;
        vector<int> a(n);
        
        if(s[0] == '.'){
            empty++;
            sequence++;
            maxSquence++;
        }
            
        
        for(int i = 1; i < n; i++){
            // cout<<empty<<" "<<sequence<<endl;
            
            if(s[i] == '.'){
                empty++;
                sequence++;
                maxSquence = max(sequence, maxSquence);
            }
            else{
                sequence = 0;
            }
                
        }

        if(maxSquence >= 3)
            cout<<2<<endl;
        else
            cout<<empty<<endl;

        

    }
        


    
 
    return 0;
}