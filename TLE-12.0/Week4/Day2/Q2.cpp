#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);
        vector<int> h(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            cin>>h[i];

        int maximum = 0;
        int i = 0, j = 0;
        int fruits = a[i];

        while(i < n && j < n){
            // cout<<i<<" "<<j<<endl;
            if(fruits <= k){
                maximum = max(j - i + 1, maximum);
                // cout<<maximum<<endl;
                if(j != n - 1){
                    if(h[j] % h[j+1] == 0){
                        // cout<<"HERE!"<<endl;
                        j++;
                        fruits += a[j];
                    }
                    else{
                        j++;
                        i = j;
                        fruits = a[j];
                    }
                    
                    
                }
                else{
                    j++;
                }
                
            }
            else{
                fruits -= a[i];
                i++;
                if(j < i){
                    j = i;
                    fruits = a[j];
                }

            }
        }
        cout<<maximum<<endl;
        

    }
        


    
 
    return 0;
}