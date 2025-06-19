#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        
        cin>>s;
        int maxCharDiff = 0;
        int index = -1;
        for(int i = 0; i < n; i++){
            if(s[i] - 'a' >= k){
                index = i;
                break;
                    
            }
        }
        if(index != -1){
            char c = s[index];
            
            int maxDiff = 0;
            for(int i = 0; i < index; i++){
                if(s[i] - 'a' > maxDiff)
                    maxDiff = s[i] - 'a'; 
                // s[i] = 'a';
                
                    
            }

            k -= maxDiff;

            for(int i = 0; i < n; i++){
                if(s[i] - 'a' <= maxDiff)
                    s[i] = 'a';
                
                    
            }
            char D = s[index];
            c = (char)((int)s[index] - k);
            // cout<<"CHAR: "<<c<<endl;


            for(int i = index; i < n; i++){
                if(s[i] <= D && s[i] >= c)
                    s[i] = c;
            }
        }
        else{
            for(int i = 0; i < n; i++)
                s[i] = 'a';
        }
    
        cout<<s<<endl;
    }

 


        


    return 0;
}