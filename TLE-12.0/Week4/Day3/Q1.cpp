#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
        int n, t;
        cin>>n>>t;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        int i = 0;
        int j = 0;
        int time = a[0];
        int maxBooks = 0;

        while(i < n && j < n){

            if(time <= t){
                maxBooks = max(j - i + 1, maxBooks);
                j++;
                if(j != n)
                    time += a[j];
            }

            else{
                time -= a[i];
                i++;
                if(j < i){
                    j = i;
                    if(i != n)
                        time = a[i];
                }

            }

        }

        cout<<maxBooks<<endl;




    
        


    
 
    return 0;
}