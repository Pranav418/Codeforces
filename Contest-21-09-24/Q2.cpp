#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        if(n % 2 == 0){
            if(k % 4 == 2 || k % 4 == 3)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else{
            if( ((k+1)/2 % 2) == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
 
    }
    return 0;
}