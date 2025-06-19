#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getZeros(int x){
    int ans = 0;
    while(x){
        if(x % 10 == 0)
            ans++;
        else
            break;
        x /= 10;
    }

    return ans;
}

int getDigits(int x){
    int ans = 0;
    while(x){
        ans++;
        x /= 10;
    }

    return ans;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        vector<int> b = {n + 1}, c = {n + 1};
        int penalty = 0;

        for(int i = 0; i < n; i++){
            if(c[c.size() - 1] <= b[b.size() - 1])
                c.swap(b);
            
            if(a[i] <= b[b.size() - 1])
                b.push_back(a[i]);
                
            else if(a[i] > c[c.size() - 1]){
                
                if(c.size() > 1)
                    penalty++;  
                b.push_back(a[i]);
            }
                
            else
                c.push_back(a[i]);

            
            
                
        }
        // for(auto ele : b)
        //     cout<<ele<<" ";
        // cout<<endl;
        // for(auto ele : c)
        //     cout<<ele<<" ";
        // cout<<endl;

        cout<<penalty<<endl;


        

    }
        


    
 
    return 0;
}