#include<bits/stdc++.h>
using namespace std;
#define int long long int

int maxBit(int x){
    int ans = 0;
    while(x){
        x /= 2;
        ans++;
    }
    return ans;
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end(), greater<>());
        
        int s = 0;
        for(int ele : a)
            s += ele;

        int m = maxBit(a[0]);
        vector<int> freq(m, 0);
        vector<int> b = a;
        int j = 0;
        int m_temp = m;
        while(m_temp--){
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += (b[i] % 2);
                b[i] /= 2;
            }
            freq[j] = (n - 2*sum) * (1 << j);
            j++;

        }

        int maxVal = -1e18;

        for(int i = 0; i < n; i++){
            int j = 0;
            int value = 0;
            while(a[i]){
                if(a[i] % 2){
                    value += freq[j];
                }
                a[i] /= 2;
                j++;
            }
            if(value > maxVal)
                maxVal = value;
        }

        cout<<s + maxVal<<endl;
    
    }
    
    return 0;
}