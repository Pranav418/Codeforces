#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getStairMinimumTime(vector<int>& query, vector<int>& stairs, vector<int>& elevators, int v, int n, int m){
    
    int minStairs = 0;
    if(query[1] > query[3]){
        swap(query[0], query[2]);
        swap(query[1], query[3]);
    }

    int x1 = query[0];
    int y1 = query[1];
    int x2 = query[2];
    int y2 = query[3];

    if(abs(x2 - x1) == 0)
        return y2 - y1;

    auto it = lower_bound(stairs.begin(), stairs.end(), y1);
    int Sright = INT_MAX;
    if(it != stairs.end()){
        int S = *it;
        if(S <= y2){
            return abs(y2 - y1) + abs(x2 - x1);
        }
        else{
            Sright = S - y2;
        }
    }

    if(it != stairs.begin()){
        --it;
        int S = *it;
        Sright = min(y1 - S, Sright);
    }

    if(Sright != INT_MAX)
        return 2*Sright + abs(y2 - y1) + abs(x2 - x1);

    
    return INT_MAX;
}

int getEvelvatorTime(int floors, int v){
    return (floors + v - 1)/v;
}

int getElevatorMinimumTime(vector<int>& query, vector<int>& stairs, vector<int>& elevators, int v, int n, int m){
    
    int minelevators = 0;
    // if(query[1] > query[3]){
    //     swap(query[0], query[2]);
    //     swap(query[1], query[3]);
    // }

    int x1 = query[0];
    int y1 = query[1];
    int x2 = query[2];
    int y2 = query[3];

    if(abs(x2 - x1) == 0)
        return y2 - y1;

    auto it = lower_bound(elevators.begin(), elevators.end(), y1);
    int Sright = INT_MAX;
    if(it != elevators.end()){
        int S = *it;
        if(S <= y2){
            return abs(y2 - y1) + getEvelvatorTime(abs(x2 - x1), v);
        }
        else{
            Sright = S - y2;
        }
    }

    if(it != elevators.begin()){
        --it;
        int S = *it;
        Sright = min(y1 - S, Sright);
    }

    if(Sright != INT_MAX)
        return 2*Sright + abs(y2 - y1) + getEvelvatorTime(abs(x2 - x1), v);

    
    return INT_MAX;
}

signed main(){

    int n, m, s, e, v;
    cin>>n>>m>>s>>e>>v;

    
    vector<int> stairs(s);

    for(int i = 0; i < s; i++)
        cin>>stairs[i];

    
    vector<int> elevators(e);

    for(int i = 0; i < e; i++)
        cin>>elevators[i];

    
    int q;
    cin>>q;
    vector<vector<int>> query(q, vector<int>(4));

    for(int i = 0; i < q; i++){
        for(int j = 0; j < 4; j++){
            cin>>query[i][j];
        }

        int sTime = getStairMinimumTime(query[i], stairs, elevators, v, n, m);
        int eTime = getElevatorMinimumTime(query[i], stairs, elevators, v, n, m);
        cout<<min(sTime, eTime)<<endl;
    }

    


    return 0;
}