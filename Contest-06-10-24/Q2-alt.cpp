#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int current = 0;
        unordered_map<int, int> extra;
        bool done = false;
        for(int i = 0; i < n; i++){
            // cout<<i<<" "<<current<<endl;
            if(current != a[i]){
                if(i == 0){
                    done = true;
                    break;
                }
                else{
                    if(a[i] == a[i-1]){
                        extra[a[i] % x]++;
                        // cout<<"E: "<<current<<" "<<a[i]<<endl;
                    }
                    else{
                        if(extra[current % x] && extra.find(current % x) != extra.end()){
                            current++;
                            extra[current % x]--;
                            i--;
                        }
                        else{
                            done = true;
                            break;
                        }
                    }
                }
            }
            else
                current++;
        }
        if(done)
            cout<<current<<endl;
        else{
            done = true;
            // cout<<"E: "<<extra[current % x]<<endl;
            while(done){
                // cout<<current<<" "<<extra.size()<<endl;
                done = false;
                if((extra[current % x] > 0) && (extra.find(current % x) != extra.end())){
                    current++;
                    extra[current % x]--;
                    done = true;
                }
                else{
                    break;
                }

            }

            cout<<current<<endl;
        }

        
        
        

    }
    
    


    return 0;
}