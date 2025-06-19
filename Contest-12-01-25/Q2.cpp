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
        vector<int> c(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < n; i++){
            cin>>b[i];
        }    

        for(int i = 0; i < n; i++){
            c[i] = a[i] - b[i];
        }

        sort(c.begin(), c.end());

        int count = 0;
        for(int i = 0; i < n; i++){
            if(c[i] < 0){
                // negsum += a[i];
                count++;
            }

        }

        if(count > 1)
            cout<<"NO"<<endl;
        else if(count == 1){
            if(c[1] >= abs(c[0]))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;


        

        
    }




    return 0;
}