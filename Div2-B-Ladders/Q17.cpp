#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    vector<vector<int>> a(3, vector<int>(3));

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin>>a[i][j];

    vector<int> values(3);
    int highest = 0;
    int x = 0;
    int highestIndex = 0;
    
    for(int i = 0; i < 3; i++){
        int value = 0;
        for(int j = 0; j < 3; j++){
            value += a[i][j];
        }
        values[i] = value;
        x += value;
        if(value > highest){
            highest = value;
            highestIndex = i;
        }    
    }
    int y = 0;
    for(int i = 0; i < 3; i++){
        y += a[highestIndex][i];
        
    }
    // cout<<smallestIndex<<endl;
    int k = (y - (highest*3 - x)) / 2;

    for(int i = 0; i < 3; i++){ 
        
        for(int j = 0; j < 3; j++){
            if(i == j){
                a[i][j] = highest - values[i] + k;
            }
        }
        
            
    }    
    
    for(int i = 0; i < 3; i++){
    
        for(int j = 0; j < 3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
            
    }

    



    return 0;
}