#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getSH(int l, int r){

    if(l == r){
        return INT_MAX;
    }

    cout<<"? "<<l<<" "<<r<<endl;
    int SH;
    cin>>SH;

    return SH;
}



signed main(){

    int n;
    cin>>n;


    int low = 1;
    int high = n;
    int ans = -1;
    int mid;
    int SH = getSH(1, n);

    while(low <= high){

        mid = low + (high - low)/2;

        //  = getSH(low , high);
        if(high - low <= 1){
            ans = high ^ low ^ SH;
            break;
        }

        if(SH > mid){
            
            int SH_new = getSH(mid + 1, high);
            if(SH_new == SH){
                low = mid + 1;
            }
            else{
                if(low == mid){
                    ans = mid;
                    break;
                }
                SH = getSH(low, mid);
                high = mid;
            }

        }
        else{
            int SH_new = getSH(low, mid);
            if(SH_new == SH){
                high = mid;
                
            }
            else{
                if(mid + 1 == high){
                    ans = high;
                    break;
                }
                SH = getSH(mid + 1, high);
                
                low = mid + 1;
            }
            // high = mid;
        }


        
    }

    cout<<"! "<<ans<<endl;
    
    
    return 0;
}