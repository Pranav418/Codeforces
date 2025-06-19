#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool money(vector<int>& p, int T, int x, int y, int a, int b, int k){
    int n = p.size();
    int m = 0;
    if(x > y){
        swap(a, b);
        swap(x, y);
    }
    
    int p1 = T/(a*b);
    int p2 = T/b - p1;
    int p3 = T/a - p1;

    int i = 0;
    while((p1--) && (i < n)){
        m += (p[i]/100)*(x+y);
        i++;
    }

    while((p2--) && (i < n)){
        m += (p[i]/100)*(y);
        i++;
    }

    while((p3--) && (i < n)){
        m += (p[i]/100)*(x);
        i++;
    }

    return m >= k;
    
}

signed main(){

    int q;
    cin>>q;
    while(q--){

        int n;
        cin>>n;

        vector<int> p(n);

        for(int i = 0; i < n; i++)
            cin>>p[i];

        sort(p.rbegin(), p.rend());
        int x, y, a, b, k;

        cin>>x>>a>>y>>b>>k;

        

        int low = 1;
        int high = n;
        int ans = -1;
        int mid;

        while(low <= high){

            mid = low + (high - low)/2;
            // cout<<"mid: "<<mid<<endl;
            if(money(p, mid, x, y, a, b, k)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;


            
        
        }

        cout<<ans<<endl;
    }



    return 0;
}