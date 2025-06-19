#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m, k;
        cin>>n>>m>>k;

        vector<int> a(k);
        for(int i = 1; i <= k; i++)
            a[i - 1] = i;

        vector<int> b = a;
        if(k % 2){
            swap(b[0], b[(k/2)]);
        }
        
        if(m > k && (m % k == 0) ){
            
            for(int i = 0; i < n; i++){
                int x = m / k;
                while(x--){
                    for(int j = 0; j < k; j++){
                    
                        if(i % 2)
                            cout<<a[k - 1 - j]<<" ";   
                        else
                            cout<<b[j]<<" ";
    
                    }
                }
                
                cout<<endl;
            }
        }
        
        else if(k != m){
            int index = 0;
            int ele;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    
                    ele = a[index];
                    index = (index + 1) % k;
                    cout<<ele<<" ";

                }
                cout<<endl;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    
                    if(i % 2)
                        cout<<a[m - 1 - j]<<" ";    
                    else{
                        if(k % 2){
                            if(j == 0)
                                cout<<(k + 1)/2<<" ";
                            else if(j == (k/2))
                                cout<<1<<" ";
                            else
                                cout<<a[j]<<" ";
                        }
                        else
                            cout<<a[j]<<" ";
                    }
                        

                }
                cout<<endl;
            }
        }
        
        
    
    }
    
    return 0;
}