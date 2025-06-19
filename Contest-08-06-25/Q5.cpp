#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            cin>>b[i];

        map<int, int> m1, m2;
        int ans = 0;
        for(int i = n - 1; i >= 0; i--){
            if(m2.find(a[i]) != m2.end()){
                int index = m2[a[i]];
                if((index - i) % 2 == 0){
                    ans = i + 1;
                    break;
                }
                else{
                    if(index - i > 1){
                        ans = i + 1;
                        break;
                    }
                }
            }

            if(m1.find(b[i]) != m1.end()){
                int index = m1[b[i]];
                if((index - i) % 2 == 0){
                    ans = i + 1;
                    break;
                }
                else{
                    if(index - i > 1){
                        ans = i + 1;
                        break;
                    }
                }
            }

            if(m1.find(a[i]) != m1.end()){
               int index = m1[a[i]];
                if((index - i) % 2 == 1){
                    ans = max(i + 1, ans);
                    break;
                }
                else{
                    if(index - i > 1){
                        ans = max(i + 1, ans);
                        break;
                    }
                }
            }

            if(m2.find(b[i]) != m2.end()){
               int index = m2[b[i]];
                if((index - i) % 2 == 1){
                    ans = max(i + 1, ans);
                    break;
                }
                else{
                    if(index - i > 1){
                        ans = max(i + 1, ans);
                        break;
                    }
                }
            }
            if(a[i] == b[i]){
                ans = max(i + 1, ans);
                break;
            }
            m1[a[i]] = i;
            m2[b[i]] = i;


        }

        cout<<ans<<endl;



    }
        


    
 
    return 0;
}