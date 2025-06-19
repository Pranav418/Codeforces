#include<bits/stdc++.h>
using namespace std;
#define int long long int

int validys(vector<int>& a, int x){
    int count = 0;
    if(x < 0){
        int val1 = (abs(x) + 1)/2;
        int val2 = 2*abs(x);

        int val3 = x;
        int val4 = -((abs(x) + 1)/2);

        int index1 = lower_bound(a.begin(), a.end(), val2) - lower_bound(a.begin(), a.end(), val1) + 1;
        int index2 = lower_bound(a.begin(), a.end(), val4) - lower_bound(a.begin(), a.end(), val3);
        if(*lower_bound(a.begin(), a.end(), val4) != val4)
            index2--;
            
        if(*lower_bound(a.begin(), a.end(), val2) != val2)
            index1--;
        
        count += index2 + index1;

    }
    else{
        int index1 = lower_bound(a.begin(), a.end(), 2*x) - lower_bound(a.begin(), a.end(), x);
        if(*lower_bound(a.begin(), a.end(), 2*x) != 2*x)
            index1--;

        count += index1;
    }

    return count;
}

int validYs(vector<int>& a, int x){
    int count = 0;
    if(x < 0){
        int val1 = 0;
        int val2 = 2*abs(x);

        int val3 = x;
        int val4 = -((abs(x) + 1)/2);

        int index1 = lower_bound(a.begin(), a.end(), val2) - lower_bound(a.begin(), a.end(), val1) + 1;
        int index2 = lower_bound(a.begin(), a.end(), val4) - lower_bound(a.begin(), a.end(), val3);
        if(*lower_bound(a.begin(), a.end(), val4) != val4){
            index2--;
            // cout<<val4<<endl;
            // cout<<"AA"<<endl;
        }
            
        if(*lower_bound(a.begin(), a.end(), val2) != val2)
            index1--;
        
        cout<<index1<<endl;
        cout<<index2<<endl;
        count += index2 + index1;

    }
    else{
        int index1 = lower_bound(a.begin(), a.end(), 2*x) - lower_bound(a.begin(), a.end(), x);
        if(*lower_bound(a.begin(), a.end(), 2*x) != 2*x)
            index1--;

        count += index1;
    }

    return count;
}

signed main(){
    
        
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }


    sort(a.begin(), a.end());
    // int n = 12;
    // vector<int> a = {-6, -4, -3, -2, 0, 1, 2, 3, 4, 7, 10, 12};
    // int low = *max_element(a.begin(), a.end());
    // int high = 2e14 + 5;
    // int mid = low + (high - low)/2;
    // int ans = -1;
    
    // int x;
    // cin>>x;
    //lower_bound(a.begin(), a.end(), x) - a.begin()
    // cout<<validYs(a, -5)<<endl;
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += validys(a, a[i]);
    }

    cout<<ans<<endl;
       
            

        
    




    return 0;
}