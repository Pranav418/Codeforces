#include<bits/stdc++.h>
using namespace std;
#define int long long int

/*Returns true if s1 is subsequence of s2*/
bool isSubSeq(const string& s1, const string& s2)
{
    int m = s1.length(), n = s2.length();
  
    // For s1 to be subsequence, its length must
    // smaller than s2
    if (m > n) return false;
  
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
  
   /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == m;
}


string solve(string s, string t){
    // if(s == t)
    //     return "array";
    
    map<char, int> sFreq;
    map<char, int> tFreq;

    for(int i = 0; i < s.length(); i++){
        sFreq[s[i]]++;
    }

    for(int i = 0; i < t.length(); i++){
        tFreq[t[i]]++;
    }

    bool exactSequence = true;
    for(auto ele : tFreq){
        if(sFreq.find(ele.first) == sFreq.end()){
            return "need tree";
        }
        else{
            if(sFreq[ele.first] < ele.second)
                return "need tree";
            // else if(sFreq[ele.first] > ele.second)
            //     return "automaton";
        }
    }

    if(s.length() == t.length())
        return "array";

    // cout<<"B"<<endl;
    if(isSubSeq(t, s))
        return "automaton";
    
    // if(s.find(t) != string::npos){
    //     return "automaton";
    // }

    return "both";
}

signed main(){
    
    string s, t;
    cin>>s>>t;

    cout<<solve(s, t);

    



    return 0;
}