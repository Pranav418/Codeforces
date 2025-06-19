#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int>::iterator ip = unique(a.begin(), a.end());

        a.resize(distance(a.begin(), ip));

        n = a.size();

        vector<int> visited(n, 0);

        map<int, vector<int>, greater<int>> m;

        for(int i = 0; i < n; i++){
            m[a[i]].push_back(i);
        }

        int clones = 0;

        for(auto ele : m){
            for(int i = 0; i < ele.second.size(); i++){
                int index = ele.second[i];
                bool left = false;
                bool right = false;
                if(index != 0){
                    if(visited[index - 1]){
                        left = true;
                    }
                }

                if(index != n - 1){
                    if(visited[index + 1]){
                        right = true;
                    }
                }

                if(!left && !right){
                    clones++;
                    visited[index] = 1;   
                }
                else if(left){
                    visited[index] = 1; 
                }
                else
                    visited[index] = 1; 
                // cout<<index<<" ";
            }
            // cout<<endl;
        }

        cout<<clones<<endl;
        // cout<<endl;

        // for(int i = 0; i < a.size(); i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;
        
    }

        
    return 0;
        

    }
        


    
 
   
