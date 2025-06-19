#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
    int n;
    cin>>n;

    vector<int> A;
    vector<int> B;
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

    for(int i = 0; i < n; i++){
        if(prefix[i] == (sum/3) )
            A.push_back(i);
        
        if(prefix[i] == (2*sum/3) ) 
            B.push_back(i);
    }

    for(int i = 0; i < A.size(); i++){
        int index = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
        S += (B.size() - index);
    }


    if(sum == 0){
        int zeros = A.size() - 1;
        cout<<(zeros * (zeros - 1))/ 2;
        return 0;
    }

    cout<<S<<endl;


    return 0;
}