#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, q;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        cin>>q;



        int mb = 0;

        int largest = *max_element(a.begin(), a.end());
        int maxVal = largest; 

        while(largest){
            largest /= 2;
            mb++;
        }
        
        vector<vector<int>> b(n, vector<int>(mb));
        vector<int> temp = a;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < mb; j++){
                b[i][j] = temp[i] % 2;
                temp[i] /= 2;
                // cout<<b[i][j]<<" ";
            }
            // cout<<endl;
        }

        for(int i = 0; i < mb; i++){
            for(int j = n - 1; j >= 0; j--){
                if(j == n - 1){
                    b[j][i] = b[j][i] == 1 ? j : -1; 
                }
                else{

                    if(b[j][i] == 0)
                        b[j][i] = -1;
                    else
                        b[j][i] = b[j + 1][i] == -1 ? j : b[j + 1][i];

                }
                // cout<<b[j][i]<<" ";
            }
            // cout<<endl;
        } //End of precomputation

        vector<vector<int>> queries(q);
        
        for(int i = 0; i < q; i++){
            // cout<<"Q:"<<i+1<<endl;
            int l, k;
            cin>>l>>k;
            l--;
            if(k > a[l]){
                cout<<-1<<endl;
                continue;
            }
            // queries[i] = {l, k};
            int x1 = 0;

            int l1 = k;
            vector<bool> kb;
            while(l1){
                kb.push_back(l1 % 2);
                // cout<<l1 % 2<<" ";
                l1 /= 2;
                x1++;
            }
            // cout<<endl;
            int l2 = k - 1;
            if((l2 >> (x1 - 1)) == 0){
                x1--;
                // cout<<"POWER OF 2: "<<k<<endl;
            }
            int ans = -1;

            for(int i = mb - 1; i >= x1 ; i--){
                if(b[l][i] != -1){
                    ans = max(b[l][i] + 1, ans);
                }
            }

            int curr = INT_MAX;
            int low = 0;

            //reverse(kb.begin(), kb.end());

            for(int i = kb.size() - 1; i >= 0; i--){
                
                if(kb[i]){
                    if(b[l][i] != -1){
                        curr = min(b[l][i] + 1, curr);
                    }
                    else{
                        curr = l + 1;
                        break;
                    }
                }
                else{        
                    if(b[l][i] != -1){
                        low = max(b[l][i] + 1, low);
                    }
                    
                }
                //cout<<"Curr: "<<curr<<" || "<<"Low: "<<low<<" Bit: "<<kb[i]<<endl;
                if(low >= curr)
                    break;
                
            }
            if(curr != INT_MAX){
                if(ans != -1){
                    ans = max(ans, curr);
                }
                else{
                    ans = curr;
                }
            }

            
                
            cout<<ans<<" ";
        }
        cout<<endl;


        

        //cout<<"Done"<<endl;

    }
        


    
 
    return 0;
}