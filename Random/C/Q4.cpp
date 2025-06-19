#include<bits/stdc++.h>
using namespace std;
#define int long long int

 
signed main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];


        int inARow = 0;
        int curr = 1;
        sort(a.begin(), a.end());
        bool possible = false;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                curr++;
                if(curr == 2){
                    inARow++;
                }
                if(curr == 4){
                    possible = true;
                    break;
                }
            }
            else if(a[i] == a[i-1] + 1){
                curr = 1;
                
            }
            else{
                curr = 1;
                inARow = 0;
            }

            if(inARow >= 2){
                possible = true;
                break;
            }
        }
        
        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    
    return 0;
}