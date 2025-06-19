#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c = '#';
            if(i % 2 == 0){
                
            }
            else if( (i+1)/2 % 2){
                if(j != m - 1)
                    c = '.';
            }
            else{
                if(j != 0)
                    c = '.';
            }
            cout<<c;
        }
        cout<<endl;
    }
}