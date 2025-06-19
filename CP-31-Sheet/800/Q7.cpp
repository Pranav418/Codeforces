#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;

        string x, s;
        cin>>x;
        cin>>s;
        int operations = 0;
        bool found = false;
        while(x.length() < 100){

            if(x.find(s) != string::npos){
                cout<<operations<<endl;
                found = true;
                break;
            }
            operations++;    
            x += x;
        }

        if(!found)
            cout<<-1<<endl;
        

    }
        


    
 
    return 0;
}