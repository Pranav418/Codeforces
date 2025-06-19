#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n;
        cin>>q;


        for(int r = 0; r < q; r++)
        {
            // cin.ignore(); 

            string s;
            cin>>s;
            int X, Y, d;
            bool value = false;
            if(s == "->"){
                cin>>X>>Y;
            }
            else{
                cin>>d;
                value = true;
            }

            d--;

            if(value){

                int p = 0;
                int x = 0;
                int y = 0;
                while(d){
                    int quad = (d % 4) + 1;
                    d /= 4;

                    if(quad == 2 || quad == 3)
                        x += 1<<p;
                    if(quad == 2 || quad == 4)
                        y += 1<<p;

                    p++;
                }

                cout<<x + 1<<" "<<y + 1<<endl;
            }
            else{
                X--;
                Y--;
                if((X || Y) == 0){
                    cout<<1<<endl;
                    continue;
                }
                vector<int> rem;
                int s[2][2] = {
                    {0, 3},
                    {2, 1}
                };
                while(X || Y){
                    int index1 = X % 2;
                    int index2 = Y % 2;

                    rem.push_back(s[index1][index2]);

                    X /= 2;
                    Y /= 2;
                }
                reverse(rem.begin(), rem.end());
                int ans = rem[0];
                for(int i = 1; i < rem.size(); i++){
                    ans *= 4;
                    ans += rem[i];
                }

                cout<<ans + 1<<endl;
            }

            
            
        }

        
    
    }
    
    return 0;
}