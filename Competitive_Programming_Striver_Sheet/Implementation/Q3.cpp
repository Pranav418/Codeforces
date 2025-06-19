#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> a(5, vector<int>(5, 0));
    int I = -1, J = -1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>a[i][j];
            if(a[i][j]){
                I = i;
                J = j;
            }    
        }
            
    }

    cout<<abs(I - 2) + abs(J-2);
    return 0;
}