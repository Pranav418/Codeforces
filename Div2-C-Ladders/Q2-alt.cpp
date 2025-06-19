#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
    int n;
    cin>>n;
    int S = 0;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    vector<int> prefix(n);
    prefix[0] = a[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + a[i];
    }

    int sum = prefix[n - 1];
    if(sum % 3 != 0 || n < 3){
        cout<<0;
        return 0;
    }

    int sum2by3 = 0;
    int sumby3 = 0;
    for(int i = 0; i < n - 1; i++){
        
        if(prefix[i] == (2*sum/3) ) 
            sum2by3 += sumby3;
        
        if(prefix[i] == (sum/3) )
            sumby3++;
    
    }

    cout<<sum2by3<<endl;


    return 0;
}