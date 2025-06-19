#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &array, int start_idx, int end_idx, int search_val) {

   if( start_idx == end_idx )
      return array[start_idx] <= search_val ? start_idx : -1;

   int mid_idx = start_idx + (end_idx - start_idx) / 2;

   if( search_val < array[mid_idx] )
      return search( array, start_idx, mid_idx, search_val );

   int ret = search( array, mid_idx+1, end_idx, search_val );
   return ret == -1 ? mid_idx : ret;
}

int getIndex(vector<int>& a, int ele, bool end = false){
    if(end){
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] == ele)
                return i;
        }
    }
    else{
        for(int i = 0; i < a.size(); i++){
            if(a[i] == ele)
                return i;
        }
    }

    cout<<"ERROR";
    return 0;
    
}

int findMaxPos(vector<int>& a){
    int maximum = a[0];
    int index = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] > maximum){
            maximum = a[i];
            index = i;
        }
    } 
    return index;
}

int main(){
    // vector<int> h = {3, 4, 4, 5, 5, 5, 5, 6};
    // cout<<search(h, 0, h.size() - 1, 5);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        // sort(a.begin(), a.end());
        int index = findMaxPos(a);
        while(m--){
            
            char c;
            int l, r;
            cin>>c>>l>>r;
            if(a[index] >= l && a[index] <= r)
                c == '+' ? a[index]++ : a[index]--;
            
            cout<<a[index]<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}

