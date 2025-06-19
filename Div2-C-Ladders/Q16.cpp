#include <bits/stdc++.h>
using namespace std;
#define int long long int 

void solve(vector<int>& a, int n){
    if(a.size() == 1){
        cout<<-1;
        return;
    }
    sort(a.begin(), a.end());
    vector<int> diff;

    for(int i = 1; i < n; i++)
        diff.push_back(a[i] - a[i-1]);

    unordered_map<int, int> count;
    for(auto ele : diff)
        count[ele]++;

    if(count.size() == 1){
        if(diff[0] == 0){
                cout<<1<<endl;
                cout<<a[0];
                return;
            }
        if(diff.size() == 1){
            // cout<<"A"<<endl;
            // if(diff[0] == 0){
            //     cout<<1<<endl;
            //     cout<<a[0];
            //     return;
            // }
            if(diff[0] % 2 == 0){
                cout<<3<<endl;
                cout<<a[0] - diff[0]<<" "<< (a[0] + a[1]) / 2<<" "<<a[1] + diff[0];
                return;
            }
            else{
                cout<<2<<endl;
                cout<<a[0] - diff[0]<<" "<<a[1] + diff[0];
                return;
            }
        }
        else{
            cout<<2<<endl;
                cout<<a[0] - diff[0]<<" "<<a[a.size() - 1] + diff[0];
                return;
        }
    }

    if(count.size() > 2){
        cout<<0;
        return;
    }

    if(count.size() == 2){
        // cout<<"A"<<endl;
        vector<int> c;
        for(auto ele : count){
            c.push_back(ele.first);
            // cout<<"ele: "<<ele.first<<endl;
        }
        for(int i = 0; i < 2; i++){
            if(count[c[i]] == 1){
                // cout<<"B"<<endl;
                int j = i ? 0 : 1 ;
                int diff = c[j];
                if(c[i] % 2 == 0 && c[i] == c[j] * 2){
                    cout<<1<<endl;

                    for(int k = 0; k < n + 1; k++){
                        if(a[k] + diff != a[k+1]){
                            cout<<a[k] + diff<<endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    
    cout<<0;
    return;

    

}

signed main(){

    int n;
    cin>>n;

   vector<int> a(n);

   for(int i = 0; i < n; i++)
    cin>>a[i];

    solve(a, n);
    


    return 0;
}