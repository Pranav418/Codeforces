#include <bits/stdc++.h>
using namespace std;
int power(int e){
    int ans = 1;
    while(e--){
        ans *= 10;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int exponent = 0;
        int k = 0;
        vector<int> round_numbers;
        while(n){
            
            if(n % 10){
                k++;
                round_numbers.push_back( (n % 10) * power(exponent) );
            } 
            
            exponent++;
            n /= 10;
            

        }
        cout<<k<<endl;
        for(int ele : round_numbers)
            cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}