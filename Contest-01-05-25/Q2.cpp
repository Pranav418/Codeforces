#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, x;
        cin>>n>>x;

        if(x == 0){
            if(n == 1){
                cout<<-1<<endl;
            }
            if(n == 2){
                cout<<2<<endl;
            }
            if(n > 2){
                if(n % 2){
                    int y = (n - 3) + 6;
                    cout<<y<<endl;
                }
                else{
                    cout<<n<<endl;
                }
            }

            continue;
        }

        if(x == 1){
            if(n % 2 == 0){
                cout<<n - 2 + 5<<endl;
                continue;
            }
            
        }
            

        int temp = x;
        int b = 0;
        while(temp){
            if(temp % 2)
                b++;
            temp /= 2;
        }

        int r = max(n - b, (long long)0);
        if(r % 2)
            r++;
        cout<<r + x<<endl;
    }

        
    return 0;
        

    }
        


    
 
   
