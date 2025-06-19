#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(2*n);
        for(int i = 0; i < 2*n; i++)
            cin>>a[i];

        int off = 0;
        int on = 0;

        for(int i = 0; i < 2*n; i++){
            if(a[i] == 0) off++;
            if(a[i] == 1) on++;
        }

        int min = on % 2 == 0 ? 0 : 1;

        int max = on;

        if(on > n)
            max = 2*n - on;

        cout<<min<<" "<<max<<endl;    

    }


    return 0;
}