#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> SieveOfEratosthenes(int n)
{
    vector<int> ans;
    vector<bool> prime(n + 1, true);

  for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            ans.push_back(p);

    return ans;
}

signed main(){

    int yes = 0;
    int possibleAnswer = 0;
    vector<int> primes = SieveOfEratosthenes(100);
    for(int i = 2; i <= 10; i++){
        cout<<i<<endl;

        string s;
        cin>>s;
        
        if(s == "yes"){
            possibleAnswer = i;
            yes++;
        }        
    }
        
    if(yes > 1)
        cout<<"composite"<<endl;
    else if (yes < 1)
        cout<<"prime"<<endl;
    else{
        int start = 4;
        if(possibleAnswer > 3)
            start = 2;
        for(int i = start; i < primes.size(); i++){
            if(possibleAnswer * primes[i] > 100){
                cout<<"prime"<<endl;
                return 0;
            }
            cout<<possibleAnswer * primes[i]<<endl;

            string s;
            cin>>s;

            if(s == "yes"){
                cout<<"composite"<<endl;
                return 0;
            }     

        }
    }

    // cout<<"prime"<<endl;


    


    return 0;
}