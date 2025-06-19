#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    vector<vector<int>> instruments;;

    for(int i = 0; i < n; i++)
        instruments.push_back({a[i], i + 1});
    
    sort(instruments.begin(), instruments.end());
    vector<int> indices;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(k >= instruments[i][0]){
            k -= instruments[i][0];
            indices.push_back(instruments[i][1]);
            ans++;
        }
        else
            break;
        
        
    }
    cout<<ans;
    if(ans)
        cout<<endl;
    for(int i = 0; i < indices.size(); i++)
        cout<<indices[i]<<" ";
        


    
    
}