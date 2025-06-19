#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());
        unordered_map<int, int> freq;

        int current = 0;
        bool done = false;
        for(int i = 0; i < n; i++){
            // cout<<current<<" "<<i<<endl;
            if(current != a[i]){
                if(i == 0){
                    cout<<current<<endl;
                    done = true;
                    break;
                }
                else{
                    if(a[i] == a[i-1]){
                        freq[a[i]]++;
                    }
                    else{
                        bool start = false;
                            for(auto ele : freq){
                            // cout<<ele.first<<endl;
                                if(freq[ele.first] > 0 && ((current - ele.first) % x) == 0){
                                    // cout<<ele.first<<endl;
                                    start = true;
                                    freq[ele.first]--;
                                    break;
                                }
                                
                            }
                        if(!start){
                            cout<<current<<endl;
                            done = true;
                            break;
                        }
                        else{
                            current++;
                            i--;
                        }
                            
                        
                    }
                }
            }
            else{
                current++;
            }
        }

        // cout<<"CURRENT: "<<current<<endl;

        // for(auto p : freq){
        //     cout<<p.first<<" : "<<p.second<<endl;
        // }
        // cout<<"End map"<<endl;

        if(!done){
            
            bool start = true;
            while (start)
            {
                start = false;
                for(auto ele : freq){
                    // cout<<ele.first<<endl;
                    if(freq[ele.first] > 0 && ((current - ele.first) % x) == 0){
                        // cout<<ele.first<<endl;
                        start = true;
                        freq[ele.first]--;
                        break;
                    }
                        
                }

                if(start){
                    current++;
                    // cout<<"CURRENT: "<<current<<endl;
                }

            }

            cout<<current<<endl;
            
        }



    }
 
    
    return 0;
}