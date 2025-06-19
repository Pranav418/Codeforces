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

        vector<bool> used(n, false);
        int index = 1;
        bool done = false;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(!used[a[i] - 1]){
                cout<<a[i]<<" ";
                used[a[i] - 1] = true;
                count++;
            }
            else{
                while(used[index - 1] && (count < n)){
                    index = index + 1;
                    if(index == n + 1)
                        index = 1;
                }
                cout<<index<<" ";
                used[index - 1] = true;
                index = (index + 1);
                if(index == n + 1)
                        index = 1;
                count++;
            }

        }
        cout<<endl;

    }



    


    return 0;
}