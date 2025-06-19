#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        string s;
        cin>>s;


        vector<int> a(n);
        int ans = 1;
        int l = 0;
        int color = 1;
        bool solution = false;
        bool positive = s[0] == '(';
        for(int i = 0; i < n; i++){
            
            l += s[i] == '(' ? 1 : -1;
            
            if((positive && l < 0) || (!positive && l > 0)){
                positive = !positive;
                color++;
            }
            a[i] = color;

            if(l == 0 && i == n - 1) solution = true;
        }
        if(!solution){
            cout<<-1<<endl;
        }
        else{
            if(color == 1){
                cout<<color<<endl;
                for(auto ele : a)
                    cout<<ele<<" ";


            }
            else{
                color = min((long long)2, color);
                cout<<color<<endl;
                for(auto ele : a)
                    cout<<1 + (ele % 2)<<" ";
            }
            
            cout<<endl;
        }

        }
 
    return 0;
}