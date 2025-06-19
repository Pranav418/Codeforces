#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<pair<int, int>> topThree(vector<int>& a){
    vector<pair<int, int>> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>  PQ;

    for(int i = 0; i < a.size(); i++){
        PQ.push({a[i], i});

        if(PQ.size() > 3)
            PQ.pop();
    }
    
    while(!PQ.empty()){
        ans.push_back(PQ.top());
        PQ.pop();
    }
        
    return ans;

}

signed main(){
    
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin>>b[i];

        vector<int> c(n);
        for(int i = 0; i < n; i++)
            cin>>c[i];

        vector<pair<int, int>> A = topThree(a);
        vector<pair<int, int>> B = topThree(b);
        vector<pair<int, int>> C = topThree(c);

        int maxVal = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(A[i].second != B[j].second && B[j].second != C[k].second && C[k].second != A[i].second)
                        maxVal = max(A[i].first + B[j].first + C[k].first, maxVal);
                }
            }
        }        

        cout<<maxVal<<endl;
       
            

        
    }




    return 0;
}