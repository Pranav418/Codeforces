#include <bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;

        if(x == y){
            if(z > x){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                cout<<x<<" "<<z<<" "<<z<<endl;
                continue;
            }
        }

        if(y == z){
            if(x > y){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                cout<<x<<" "<<x<<" "<<z<<endl;
                continue;
            }
        }

        if(x == z){
            if(y > x){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                cout<<y<<" "<<z<<" "<<y<<endl;
                continue;
            }
        }

        cout<<"NO"<<endl;



        
    }
    
    return 0;
}
