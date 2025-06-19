#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
        int n, s;
        cin>>n>>s;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];


        int sum = a[0];
        int ans = 0;
        int i = 0, j = 0;

        while(i < n && j < n){
            // cout<<i<<" "<<j<<endl;
            // cout<<"SUM"<<" "<<sum<<endl;
            if(sum <= s){
                int x = (j - i + 1);
                ans += ((x)*(x+1))/2;
                // cout<<j - i + 1<<endl;
                j++;
                if(j != n)
                    sum += a[j];
            }
            else{
                sum -= a[i];
                i++;
                if(j < i){
                    j = i;
                    sum = a[i];
                }
                    
                
            }

        }

        

        cout<<ans<<endl;
        


    
 
    return 0;
}