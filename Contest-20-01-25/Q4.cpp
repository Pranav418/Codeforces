#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        int n, m;
        cin>>n>>m;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> b(m);

        for(int i = 0; i < m; i++)
            cin>>b[i];

        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0; i < n; i++)
            sum1 += a[i];

        for(int i = 0; i < m; i++)
            sum2 += b[i];

        if(sum1 != sum2){
            cout<<"NO"<<endl;
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0;
        int j = 0;
        bool valid = true;
        while ((i < n) && (j < m))
        {
            if(a[i] == b[j]){
                i++;
                j++;
                continue;
            }
            else{
                if(i < n - 1){
                    if(a[i + 1] - a[i] <= 1){
                        if(a[i + 1] + a[i] == b[j]){
                            i += 2;
                            j++;
                            continue;
                        }
                        else{
                            valid = false;
                            break;
                        }
                    }
                    else{
                        valid = false;
                        break;
                    }
                }
                else{
                    valid = false;
                    break;
                }
            }

        }

        if(valid)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        




        
    }
    
 
    return 0;
}