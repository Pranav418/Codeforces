#include<bits/stdc++.h>
using namespace std;
#define int long long int

int nC2(int n){
    return ((n) * (n - 1))/2;
}

int reverseNc2(int k){
    return (1 + sqrt(1 + 4 * 2 * k)) / 2;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n, k;
        cin>>n>>k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        map<int, vector<int>> map;

        for(int i = 0; i < n; i++){
            if(map.find(a[i]) == map.end()){
                map[a[i]].push_back(i);
                map[a[i]].push_back(i);
            }            
            else{
                int lastSeen = map[a[i]].front();
                // int ele = map[a[i]].back();
                map[a[i]].push_back(i - lastSeen - 1);
                map[a[i]][0] = i;
            }
        }

        // for(auto ele : map){
        //     cout<<ele.first<<endl;
        //     for(auto p : ele.second)
        //         cout<<p<<" ";
        //     cout<<endl;
        // }

        int m = n + 1;
        for(int i = 1; i <= k; i++){
            if(map.find(i) != map.end()){
                map[i].push_back(n - map[i][0] - 1);
                map[i].erase(map[i].begin());
                sort(map[i].rbegin(), map[i].rend());

                if(map[i].size() >= 2){
                    int x = map[i][0];
                    int y = map[i][1];
                    if(x / 2 < y){
                        m = min(y, m);
                        // cout<<"X: "<<x<<endl;
                    }
                    else{
                        m = min(x/2, m);
                        // cout<<"Y: "<<y<<endl;
                    }
                    // cout<<"XY: "<<x<<y<<endl;
                }
            }
        }

        cout<<m<<endl;



    }
        


    
 
    return 0;
}