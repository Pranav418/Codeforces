#include<bits/stdc++.h>
using namespace std;
#define int long long int

typedef pair<int, int> pi;



signed main(){


    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> > pq;

    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(2));

    

    for(int i = 0; i < n; i++)
        cin>>a[i][0]>>a[i][1];

    sort(a.begin(), a.end());
    
    int maxRooms = 1;
    vector<int> rooms = {1};
    int roomNumber = 1;
    int start = 1;
    int end = 1;
    pq.push({a[0][1], a[0][0]});
    for(int i = 1; i < n; i++){
        
        while (!pq.empty() && (pq.top())[0] < a[i][0])
        {
            pq.pop();
            start++;
        }
        if(start > end){
            start = 1;
            end = 1;
        }
        pq.push({a[i][1], a[i][0]});

        if((int)pq.size() > maxRooms){
            maxRooms = pq.size();
            // cout<<pq.size()<<" "<<i<<endl;

            end++;
            rooms.push_back(maxRooms);
            roomNumber = 1;
        }
        else{
            if(end == maxRooms){
                start--;
            }
            else{
                end++;
            }
            rooms.push_back(roomNumber);
            roomNumber++;
        }

        cout<<"START: "<<start<<endl;
        cout<<"END: "<<end<<endl;
        maxRooms = max((int)pq.size(), maxRooms);

        
    }

    cout<<maxRooms<<endl;

    for(auto ele : rooms)  
        cout<<ele<<" ";

    


    return 0;
}