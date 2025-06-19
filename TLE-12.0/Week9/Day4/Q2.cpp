#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int n, k;
    cin>>n>>k;

    vector<vector<int>> movies(n, vector<int>(2));

    for(int i = 0; i < n; i++)
        cin>>movies[i][1]>>movies[i][0];

    
    sort(movies.begin(), movies.end());

    priority_queue<int, vector<int>, greater<int>> PQ;

    int totalMovies = 0;
    
    for(int i = 0; i < n; i++){
        int startTime = movies[i][1];
        int endTime = movies[i][0];
        if(PQ.size() < k){
            PQ.push(endTime);
            totalMovies++;
            // if(startTime >= PQ.top()){
            //     PQ.pop();
            
            // }
        }
        else{
            while(!PQ.empty() && startTime >= PQ.top()){
                PQ.pop();
                
            }
            PQ.push(endTime);
            totalMovies++;
        }
    }

    cout<<totalMovies<<endl;

/*
10 5
46 95
80 90
53 78
77 79
75 94
49 87
35 72
57 69
22 99
64 95
*/

        


    
 
    return 0;
}