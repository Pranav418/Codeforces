#include<bits/stdc++.h>
using namespace std;
#define int long long int
int value = 765;
signed main(){
    int t;
    cin>>t;

    while(t--){
        int l = 0;
        int m = 500;
        int r = 1000;

        string query = "? ";

        int j = 12;

        int low = 1;
        int high = 1000;
        int mid;

        while(low <= high){
            mid = low + (high - low)/2;
            cout<<query<<mid<<" "<<high<<endl;
            // int x;
            // cin>>x;
            int area = mid * high;
            if(value <= mid){
                area = (mid+1) * (high+1);
            }
            if(value > mid){
                area = (mid) * (high+1);
            }
            int x = area;
            cout<<area<<endl;
            if((x == -1) || ( x == ( (mid) * (high + 1))) ){
                low = mid + 1;
            }
            else
                high = mid - 1;
            
        }

        cout<<"! "<<mid<<endl;

        // while(j--){
        //     cout<<query<<m<<" "<<r<<endl;

        //     int x;
        //     cin>>x;
        //     if(x == -1){
        //                         l = m;
        //                         m = (m + r)/2;
        //     }
        //     if(x == -2){
        //                         r = m;
        //                         m = (l + m)/2;
        //     }
           
        //     if(x == ( (m + 1) * (r))){
        //         l = m;
        //         m = (m + r)/2;
        //     }
        //     else if(x == ((m + 1) * (r + 1))){
        //         r = m;
        //         m = (l + m)/2;
        //     }

        //     if( (l == m) || (r == m) ){
        //         cout<<"! "<<m<<endl;
        //         // break;
        //     }
                
            
        

    }
    return 0;
}