#include <bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){
        int a, b, c, n;
        cin>>a>>b>>c>>n;
        vector<int> coins = {a , b, c};
        sort(coins.begin(), coins.end());

        int maximum = coins[2];
        bool possible = true;;
        for(int i = 0; i < 2; i++){
            if(maximum - coins[i] > n){
                possible = false;
                break;
            }
            else{
                n -= maximum - coins[i];
            }
        }

        if(n % 3)
        possible = false;

        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    
    }
    
    return 0;
}
