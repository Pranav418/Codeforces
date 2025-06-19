#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> date(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin>>date[i][0]>>date[i][1];
    }
    sort(date.begin(), date.end());
    int day = date[0][1];
    for(int i = 1; i < n; i++){
        // cout<<day<<endl;
        if(day > date[i][1]){
            day = date[i][0];
        }
        else
            day = date[i][1];
    }

    cout<<day<<endl;

    return 0;
}