#include<bits/stdc++.h>
using namespace std;
#define int long long int

int intervalSum(int l, int r){
    string query = "? ";

    cout<<query<<l<<" "<<r<<endl;

    int x;
    cin>>x;

    return x;
}

void setFirstThree(vector<int>& a, int sum){
    int firstTwo = intervalSum(1, 2);
    int lastTwo = intervalSum(2, 3);
    a[2] = sum - firstTwo;
    a[0] = sum - lastTwo;
    a[1] = sum - a[2] - a[0];
}

signed main(){

    int n;
    cin>>n;

    vector<int> flamingos(n);
    
    int sum = intervalSum(1, n);
    for(int i = n - 1; i >= 3; i--){
        int intervalSumValue = intervalSum(1, i);
        flamingos[i] = sum - intervalSumValue;
        sum = intervalSumValue;
    }

    setFirstThree(flamingos, sum);
    

    cout<<"! ";
    for(int i = 0; i < n; i++)
        cout<<flamingos[i]<<" ";
    


    return 0;
}