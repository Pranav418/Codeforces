#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b;

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
            

        for(int i = 1; i < n; i++){
            b.push_back(a[i] - a[i-1]);
        }



        if(n == 1)
            cout<<1<<endl;
        else if(n == 2)
            cout<<a[1]-a[0]<<endl;
        else{
            int max1 = b[0];
            int max2 = b[1];

            for(int i = 2; i < n-1; i+=2){
                max1 = max(b[i], max1);
            }

            for(int i = 3; i < n-1; i+=2){
                max2 = max(b[i], max2);
            }

            if(n % 2){
                int max3 = a[n-1] - a[0];
                int m = 1;
                for(int i = 0; i < n; i++){
                    
                    // cout<<"I: "<<i<<endl;
                    // cout<<"Max: "<<max3<<endl;
                    for(int j = 0; j < n - 1; j+=2){
                        if(i % 2 == 0){
                            if(j == i)
                                j++;
                            m = max(a[j+1] - a[j], m);
                            // cout<<m<<" ";
                        }
                        
                        
                    }
                    max3 = min(m, max3);
                    // cout<<endl;
                    
                    
                }
                cout<<max3<<endl;
                // cout<<min(max1, max2)<<endl;
            }
                
            else
                cout<<max1<<endl;

            // cout<<"MAX-1: "<<max1<<endl;
            // cout<<"MAX-2: "<<max2<<endl;

            // cout<<endl;
            // for(int i = 0; i < b.size(); i++)
            //     cout<<b[i]<<" ";
            // cout<<endl<<endl;
        }

    }

    

    


    return 0;
}