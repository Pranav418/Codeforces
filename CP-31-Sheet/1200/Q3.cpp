#include<bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n, x, y;
        cin>>n>>x>>y;

        int a = n/x - (n/(lcm(x, y)));

        int b = n/y - (n/(lcm(x, y)));

        int ans = n*a - ((a)*(a-1))/2 - (b*(b+1))/2;

        cout<<ans<<endl;


        
       
            

        
    }




    return 0;
}