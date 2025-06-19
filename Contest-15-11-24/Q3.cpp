#include <bits/stdc++.h>
using namespace std;
#define int long long int 

bool sumSquare(int n)
{
    unordered_map<int, int> s;
    for (int i = 0; i * i <= n; ++i) {

        // store square value in hashmap
        s[i * i] = 1;
        if (s.find(n - i * i) != s.end()) {
            cout << sqrt(n - i * i) << "^2 + "
                 << i << "^2" << endl;
            return true;
        }
    }
    return false;
}

signed main(){

    int t;
    cin>>t;

    while(t--){

       int n;
       cin>>n;
        if(n % 2){

            vector<int> def = {1, 2, 3 ,4, 5, 6, 7, 9, 9, 8, 2, 3, 4, 5, 6, 7, 1, 10, 8, 11, 11, 12, 12, 13, 13, 1, 10};
            
            if(n > 25){
                
                n-=27;
                for(int ele : def){
                    cout<<ele<<" ";
                }
                for(int i = 28; i < 28 + n; i++){
                    cout<<i/2<<" ";
                }
                cout<<endl;
                continue;
            }

            cout<<-1<<endl;
            continue;
        }

        for(int i = 0; i < n; i++){
            cout<<i/2 + 1<<" ";
        }
        cout<<endl;



    }

  
    
    return 0;
}