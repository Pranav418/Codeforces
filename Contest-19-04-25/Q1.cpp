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
    
        for(int i = 0; i < n; i++)
            a[i] = i;

        
        int st = 0;
        int f = n - 1;
        vector<int> ans(n, -1);
        for(int i = s.length() - 1; i >= 0 ; i--){
            if(s[i] == '<'){
                ans[i + 1] = a[st];
                st++;
            }
            else{
                ans[i + 1] = a[f];
                f--;
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += (ans[i] + 1);
        // for(int i = 0; i < n; i++){
        //     if(ans[i] == -1){
                
        //     }
        // }
        ans[0] = (n*(n+1))/2 - 1 - sum;
        for(int i = 0; i < n; i++)
            cout<<ans[i] + 1<<" ";
        cout<<endl;
    }


    


    return 0;
}