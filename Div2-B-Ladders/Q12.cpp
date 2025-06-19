#include<bits/stdc++.h>
using namespace std;
// #define int long long int
signed main(){
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    int ans = 0;
    int decreasePoint = 0;
    int min = a[0];
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){ // decreasing
            decreasePoint = i;
            max = a[i];
            break;
        }
    }

    if(!decreasePoint){
        cout<<ans;
        return 0;
    }

    for(int i = decreasePoint; i < n; i++){

            if(i > decreasePoint && a[i] < a[i - 1]){
                cout<<-1;
                return 0;
            }
            if(a[i] > min){
                cout<<-1;
                return 0;
            }
            else{
                ans++;
            }
        

    }

    cout<<ans;



    



    return 0;
}