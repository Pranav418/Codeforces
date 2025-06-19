#include<bits/stdc++.h>
using namespace std;
#define int long long int

int checkSumK(vector<int>& a, int k, int S){
    int sum = 0;
    vector<int> temp(a.size());
    for(int i = 0; i < a.size(); i++)
        temp[i] = a[i] + (i+1)*k;
    sort(temp.begin(), temp.end());

    for(int i = 0; i < k; i++){
        sum += temp[i];
        if(sum > S) 
            return -1;
    }
    return sum;
}

signed main(){

    int n, S;
    cin>>n>>S;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    

    int low = 0;
    int high = n;
    int mid;
    int items = 0;
    int minCost = 0;

    while(low <= high){
        mid = low + (high - low)/2;

        int sumK = checkSumK(a, mid, S);
        // cout<<mid<<endl;
        if(sumK >= 0){
            if(mid > items){
                items = mid;
                minCost = sumK;
            }
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout<<items<<" "<<minCost<<endl;

    return 0;
}