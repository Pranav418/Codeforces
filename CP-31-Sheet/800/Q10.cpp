#include<bits/stdc++.h>
using namespace std;
#define int long long int

int pos(int x){
    if(x < 5)
        return x + 1;
    else
        return 10 - x;
}

signed main(){

    int t;
    cin>>t;
    
    while(t--){    
        int points = 0;
        vector<vector<char>> a(10, vector<char>(10));

        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++){
                cin>>a[i][j];
                
                if(a[i][j] == 'X')
                    points += min(pos(i), pos(j));
            }

        cout<<points<<endl;

    }
        


    
 
    return 0;
}