#include<bits/stdc++.h>
using namespace std;
int greatestlesser(int key, vector<int>& a)
{
    int low = 0, high = a.size() - 1;
    int ans = -1;
 
    while (low <= high) {
        int mid = low + (high - low + 1) / 2;
        int midVal = a[mid];
 
        if (midVal < key) {
            ans = mid;
            low = mid + 1;
        }
        else if (midVal > key) 
            high = mid - 1;
        else if (midVal == key)
            high = mid - 1;
        
    }
 
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m, q;
        cin>>n>>m>>q;
        
        vector<int> teachers(m);
        
        for(int i = 0; i < m; i++)
            cin>>teachers[i];

        sort(teachers.begin(), teachers.end());

        vector<int> david(q);

        for(int i = 0; i < q; i++)
            cin>>david[i];

        for(int i = 0; i < q; i++){
            int position = david[i];

            int r = lower_bound(teachers.begin(), teachers.end(), david[i]) - teachers.begin();
            int l = greatestlesser(david[i], teachers);

            if(r == teachers.size())
                cout<<n - teachers[teachers.size() - 1]<<endl;
            else if(l == -1)
                cout<<teachers[0] - 1<<endl;
            else{
                if( (teachers[r] - teachers[l]) % 2 ){
                cout<<(teachers[r] - teachers[l] - 1)/2<<endl;
                }
                else{
                    cout<<(teachers[r] -teachers[l])/2<<endl;
                }
            }
        }
    }
    return 0;
}