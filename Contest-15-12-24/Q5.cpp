#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> getPowers(int k){
    vector<int> p;
    int x = 1;

    while((x <= (1e9 + 5) )){
        p.push_back(x);
        x *= k;
    }

    return p;

}

int bsl(int x, int p){
    return (x + p - 1)/p;
}

int bsr(int x, int p){
    return (x)/p;
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int k, l1, r1, l2, r2;
        cin>>k>>l1>>r1>>l2>>r2;

        vector<int> powers = getPowers(k);

        int sum = 0;
        for(int i = 0; i < powers.size(); i++){
            int p = powers[i];
            int R = min(bsr(r2, p), r1);
            int L = max(bsl(l2, p), l1);

            if(R < l1)
                continue;
            if(L > r2)
                continue;
            if(L > R)
                continue;
            sum += R - L + 1;

        }

        cout<<sum<<endl;
        

    }



    


    return 0;
}