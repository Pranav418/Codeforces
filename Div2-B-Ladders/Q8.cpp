#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

bool isPerfectSquare(int x, unordered_set<int>& primes)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {

        int sr = sqrt(x);
        
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x) && (primes.find(sr) != primes.end());
    }
    // else return false if n<0
    return false;
}

bool isSquare(int x){
    if(x == 1)
        return false;
    int ans = 1;

    while(ans*ans < x){
        ans++;
    }

    return ans*ans == x && check_prime(ans);
}

void sieveOfEratosthenes(int n, unordered_set<int>& primes){
    vector<bool> prime(n+1, true);

    for(int p = 2; p * p <= n; p++){
        if(prime[p])
            for(int i = p * p; i <= n; i += p)
                prime[i] = false;
    }

    for(int p = 2; p <= n; p++){
        if(prime[p])
            primes.insert(p);

    }
}

signed main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    unordered_set<int> primes;

    sieveOfEratosthenes(10e6, primes);

    // for(auto prime : primes)
    //     cout<<prime<<" ";
    // cout<<endl;

    for(int i = 0; i < n; i++){
        if(isPerfectSquare(a[i], primes))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}