#include<bits/stdc++.h>
using namespace std;

bool check_min_Max_value(vector<long long int>& a, long long int x){
    long long int extra = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > x)
            extra = extra + (a[i] - x);
        else
            extra = extra - min( (x - a[i]), extra);

    return extra == 0;
}

bool check_max_Min_value(vector<long long int>& a, long long int x){
    long long int extra = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > x)
            extra = extra + (a[i] - x);
        else
            if(extra >= x - a[i])
                extra = extra - (x - a[i]);
            else
                return false;
    }

    return true;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        long long int low = 1;
        long long int high = 1e12;
        long long int mid = low + (high - low)/2;
        long long int min_Max_value = mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(check_min_Max_value(a, mid)){
                min_Max_value = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }

        low = 1;
        high = 1e12;
        long long int max_Min_value = mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(check_max_Min_value(a, mid)){
                max_Min_value = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;

        }

        cout<<min_Max_value - max_Min_value<<endl;
        
    }
    return 0;
}