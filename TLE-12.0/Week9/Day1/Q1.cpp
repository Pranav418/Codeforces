#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    vector<int> powers2(30);
    
    for(int i = 0, value = 2; i < 30; i++, value *= 2)
        powers2[i] = value;
    
        
        
    

    while(t--){
        int n;
        cin>>n;
        
        int sum1 = powers2[n - 1];
        for(int i = 0; i < n/2 - 1; i++){
            sum1 += powers2[i];
        }

        int total = 0;
        for(int i = 0; i < n; i++)
            total += powers2[i];
        int sum2 = total - sum1;
        cout<<sum1 - sum2<<endl;
    }



    


    return 0;
}