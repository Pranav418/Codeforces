#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            a[i] += i + 1;
        sort(a.begin(), a.end());

        int sum = 0;
        int index = -1;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(sum > c){
                break;
            }
            index = i;

        }

        cout<<index + 1<<endl;

        
    }
        


    
 
    return 0;
}