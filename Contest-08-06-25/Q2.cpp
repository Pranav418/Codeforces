#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n;
        cin>>n;

        vector<int> a;

        a.push_back(1);

        for(int i = n; i >= 2; i--){
            a.push_back(i);
        }

        for(auto ele : a)
            cout<<ele<<" ";

        cout<<endl;



    }
        


    
 
    return 0;
}