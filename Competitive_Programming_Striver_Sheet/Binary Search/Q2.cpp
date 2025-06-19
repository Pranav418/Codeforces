#include <bits/stdc++.h>
using namespace std;
int main(){
    int cookies = 0;

    int n, k;
    cin>>n>>k;

    vector<int> has(n);
    vector<int> value(n);
    vector<vector<int>> has_value(n, vector<int>(3));

    for(int i = 0; i < n; i++)
        cin>>has_value[i][1];
    for(int i = 0; i < n; i++)
        cin>>has_value[i][2];
    
    for(int i = 0; i < n; i++){
        has_value[i][0] = has_value[i][2] / has_value[i][1];
        has_value[i][2] -= has_value[i][0] * has_value[i][1];
    }

    sort(has_value.begin(), has_value.end());

    // for(int i = 0; i < n; i++){
    //     cout<<has_value[i][0]<<" ";
    // }
    // cout<<endl;
    bool not_empty = true;
    int lowest = has_value[0][0];
    while(not_empty){
        // for(int i = 0; i < n; i++){
        //     cout<<has_value[i][0]<<" ";
            
        // }
        // cout<<endl;
        // for(int i = 0; i < n; i++){
        //     cout<<has_value[i][1]<<" ";
            
        // }
        // cout<<endl;
        // for(int i = 0; i < n; i++){
        //     cout<<has_value[i][2]<<" ";
            
        // }
        // cout<<endl;
        // cout<<k<<endl;
        lowest = has_value[0][0];
        vector<int> made(n);
        for(int i = 0; i < n; i++)
            made[i] = has_value[i][0];

        int index = upper_bound(made.begin(), made.end(), lowest) - made.begin();
        // cout<<index<<endl;
        // if(index == 0)
        //     not_empty = false;
        for(int i = 0; i < index; i++){
            if(k >= has_value[i][1] - has_value[i][2]){
                k -= has_value[i][1] - has_value[i][2];
                has_value[i][2] = 0;
                has_value[i][0]++;
            }
            else{
                not_empty = false;
                break;
            }
        }

    }


    cout<<lowest;

    return 0;
}