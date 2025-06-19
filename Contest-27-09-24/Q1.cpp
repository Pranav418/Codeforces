#include <bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int max1 = INT_MIN;
        int max2 = INT_MIN;  
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < n; i++){
            if(i % 2){
                max1 = max(a[i], max1);
            }
            else{
                max2 = max(a[i], max2);
            }
        }

        if(n % 2 == 0){
            cout<<max(max1, max2) + n/2<<endl;
        }
        else{
            
            cout<<max( (n+1) / 2 + max2, (n-1) / 2 + max1 )<<endl;
            
        }

    }

 
    return 0;
}