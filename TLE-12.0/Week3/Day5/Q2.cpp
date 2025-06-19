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

        for(int i = 0; i < n; i++)
            cin>>a[i];

        int peaks = 0;
        int max = 0;
        int l = 1;

        vector<bool> m(n, false);

        for(int i = 1; i < n - 1; i++){
            if((a[i - 1] < a[i]) && (a[i] > a[i + 1])){
                m[i] = true;
                
                
            }
            // cout<<m[i]<<" ";
        }
        k -= 2;
        for(int i = 1; i < n - 1; i++){
            if((a[i - 1] < a[i]) && (a[i] > a[i + 1])){
                // m[i] = true;
                peaks++;

                
            }
            // cout<<m[i]<<" ";
                if(i >= k ){
                    if(m[i - k]){
                        // cout<<"I:"<<i<<" "<<endl;
                        // cout<<"Peaks Decreased:"<<peaks<<" "<<endl;
                        peaks--;
                    }
                        
                }
            // cout<<"I:"<<i<<" "<<endl;
            // cout<<"Peaks:"<<peaks<<" "<<endl;
                if(peaks > max){
                    max = peaks;
                    int z = 1;
                    l = std::max(i - k + 1, z);
                }
        }
        // k -= 2;
        // cout<<endl;

        // for(int i = 1; i < k - 1; i++){
        //     if((a[i - 1] < a[i]) && (a[i] > a[i + 1])){
        //         peaks++;
        //     }
        // }

        // max = peaks;
        // // cout<<"PPeaks:"<<peaks<<" ";
        // // peaks = 0;
        // for(int i = k - 1; i < n - 1; i++){
        //     cout<<"I:"<<i<<" ";
        //     cout<<"Peaks:"<<peaks<<" ";
        //     cout<<endl;
        //     if(m[i - k + 1])
        //         peaks--;
        //     if((a[i - 1] < a[i]) && (a[i] > a[i + 1])){
        //         peaks++;
        //     }

        //     if(peaks > max){
        //         max = peaks;
        //         l = i - 1;
        //     }
        // }

        cout<<max + 1<<" "<<l<<endl;

    }
    
 
    return 0;
}