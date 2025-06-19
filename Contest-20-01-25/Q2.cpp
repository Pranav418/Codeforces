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

        map<int, int> freq;

        for(int i = 0; i < n; i++){
            freq[a[i]]++;
        }
        int freq2 = 0;
        for(auto ele : freq){
            if(ele.second > 1){
                freq2++;
            }
        }

        if(freq2 == 0){
            cout<<-1<<endl;
            continue;
        }

        vector<int> sides(2);
        int index = 0;
        if(freq2 > 1){
            for(auto ele : freq){
                if(ele.second > 1){
                    sides[index] = ele.first;
                    index++;
                    if(index == 2)
                        break;
                }
            }
            cout<<sides[0]<<" "<<sides[0]<<" "<<sides[1]<<" "<<sides[1]<<" "<<endl;
            continue;
        }

        if(freq2 == 1){
            sort(a.begin(), a.end());
            int num;
            for(auto ele : freq){
                if(ele.second > 1){
                    num = ele.first;
                }
            }
            vector<int> b(n-2);
            int j = 0;
            int count = 0;
            vector<int> diff(n-3);
            for(auto ele : a){
                if( (ele == num) && (count < 2) ){
                    count++;
                }
                else{
                    b[j] = ele;
                    j++;
                }

            }
            bool exists = false;
            for(int i = 1; i < b.size(); i++){
                diff[i - 1] = b[i] - b[i - 1];
                if(diff[i - 1] < 2 * num){
                    exists = true;
                    cout<<b[i]<<" "<<b[i-1]<<" "<<num<<" "<<num<<endl;
                    break;
                }
            }

            if(!exists){
                cout<<-1<<endl;
            }
                
        }

        
    }
    
 
    return 0;
}