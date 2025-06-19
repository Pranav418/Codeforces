#include <bits/stdc++.h>
using namespace std;
#define int long long int 

int d1Value(vector<vector<int>>& a, int i, int j, vector<vector<int>>& D1){
    int n = a.size();
    int sum = 0;
    int I = i;
    int J = j;
    // cout<<to_string(I) + ":" + to_string(J)<<endl;
    while(i >= 0 && j < n){
        sum += a[i][j];
        i--;
        j++;
    }
    // d1[to_string(I) + ":" + to_string(J)] = sum;
    D1[I][J] = sum;
    return sum;
}

int d2Value(vector<vector<int>>& a, int i, int j, vector<vector<int>>& D2){
    int n = a.size();
    int sum = 0;
    int I = i;
    int J = j;
    while(i < n && j < n){
        sum += a[i][j];
        i++;
        j++;
    }
    // d2[to_string(I) + ":" + to_string(J)] = sum;
    D2[I][J] = sum;
    return sum;
}


signed main(){

    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> money(n, vector<int>(n));
    vector<vector<int>> D1(n, vector<int>(n, -1));
    vector<vector<int>> D2(n, vector<int>(n, -1));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
            // a[i][j] = 264322;
        }
            


    for(int i = 0; i < n; i++){
        d1Value(a, i, 0, D1);
        d2Value(a, i, 0, D2);
    }

    for(int j = 0; j < n; j++){
        d1Value(a, n-1, j, D1);
        d2Value(a, 0, j, D2);
    }

    // for(auto ele : d2)
    //     cout<<ele.first<<" -> "<<ele.second<<endl;
    // cout<<endl;
    // unordered_map<string, int> money;
    
    // cout<<"Loop starts...."<<endl;
    int max1 = 0;
    int max2 = 0;
    
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            money[i][j] = - a[i][j]; //+ f1(i, j, d1, n) + f2(i, j, d2);
            if(i + j < n){
                money[i][j] += D1[i+j][0];
            }
            else{
                money[i][j] += D1[n-1][i +  j - (n - 1)];
            }

            if(i < j){
                money[i][j] += D2[0][j-i];
            }
            else{
                money[i][j] += D2[i-j][0];
            }

            if( (i + j) % 2 ){
                
                if(money[i][j] >= max1){
                    max1 = money[i][j];
                    x1 = i;
                    y1= j;
                    
                }
                
            }
            else{
                if(money[i][j] >= max2){
                    max2 = money[i][j];
                    x2 = i;
                    y2 = j;
                }
            }
            // cout<<f1(i, j, d1, n) + f2(i, j, d2) - a[i][j]<<" ";
        }
        // cout<<endl;
    }
        
     cout<<max1 + max2<<endl;   
     cout<<x1 + 1<<" "<<y1 + 1<<" "<<x2 + 1<<" "<<y2 + 1;


    
    return 0;
}