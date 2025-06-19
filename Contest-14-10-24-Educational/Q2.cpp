#include<bits/stdc++.h>
using namespace std;
#define int long long int

int BC(int N, int K){
    vector<vector<int>> C(N+1, vector<int>(N+1, 0));
    for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
    cout<<n<<" :: "<<K<<endl;
    C[n][0] = 1;
    C[n][n] = 1;
    for (int k = 1; k < n; k++){ // loop over k from 1 to n-1 (inclusive)
        cout<<n<<" : "<<k<<endl;
        C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
        if(k == K)
            return C[N][K];
    } 
        
    }

    return -1;
}

signed main(){
    
    int t;
    cin>>t;

    vector<int> n(t);
    vector<int> k(t);
    for(int p = 0; p < t; p++){
        cin>>n[p];
    }

    for(int p = 0; p < t; p++){
        cin>>k[p];
    }    


    for(int p = 0; p < t; p++){
        int N = n[p];
        int K = k[p];
        cout<<N<<" "<<K<<endl;
        cout<<BC(N, K)<<endl;

    }


    

    


    return 0;
}