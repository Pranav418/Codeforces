#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        if( (k == 1) && (n == 1)){
            cout<<1<<endl;
            cout<<1<<endl;
            continue;
        }
        if(k < 2 || k == n){ //check
            cout<<-1<<endl;
        }
        else if((k > (n+1)/2 )){
            k = n + 1 - k;
            cout<<2*(k-1)+1<<endl;
            // for(int i = n; i >= n - (2*(k-1) + 1); i--){
            //     cout<<i<<" ";
            // }
            cout<<1<<" ";
            for(int i = n - 2*(k-1) + 1; i <= n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
            
        }
        else{
            if(k == (n+1) / 2){
                cout<<n<<endl;
                for(int i = 1; i <= n; i++)
                    cout<<i<<" ";
                cout<<endl;
            }
            else{
                cout<<2*(k-1)+1<<endl;
                for(int i = 1; i <= 2*(k-1) + 1; i++){
                    cout<<i<<" ";
                }
                cout<<endl;


            }
        }



        // if(k == (n+1) / 2){
        //     cout<<n<<endl;
        //     for(int i = 1; i <= n; i++)
        //         cout<<i<<" ";
        //     cout<<endl;
        // }
        // else
        //     cout<<-1<<endl;
    }

    return 0;
}