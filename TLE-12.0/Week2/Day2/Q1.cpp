#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool is_sqr(int n) {
    long root = sqrt(n);
    return root * root == n;
}

signed main(){

    int t;
    cin>>t;

    vector<int> perfectSquares;
    vector<int> triplets;

    int limit = 1e9;

    for(int i = 2; i * i <= 2 * limit; i++)
        perfectSquares.push_back(i * i);
    

    for(int i = 0; i < perfectSquares.size(); i++)
        if(perfectSquares[i] % 2)
            triplets.push_back((perfectSquares[i] + 1)/2)  ;
        

    while(t--){
        int n;
        cin>>n;
        // cout<<"A"<<endl;
        int index = lower_bound(triplets.begin(), triplets.end(), n) - triplets.begin();
        if(*lower_bound(triplets.begin(), triplets.end(), n) == n)
            cout<<index + 1<<endl;
        else
            cout<<index<<endl;
    }



    


    return 0;
}