#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        
        int size = r - l + 1;
        if(size % 2 == 0){
            cout<<size/4<<endl;
        }
        else if(r%2){
                cout<<(1 + size/2)/2<<endl;
        }
        else{
            cout<<size/4<<endl;
        }
    }
}