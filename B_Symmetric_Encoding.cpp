#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,r;
        cin>>s;
        set<char> se;
        for(int i=0;i<n;i++){
          se.insert(s[i]);  
        }
        for(auto e:se){
            r.push_back(e);
        }
        map<char, char> map;
        int j = r.size() - 1 ;
        for (int i = 0; i <= j; i++){
            map[r[i]] = r[j - i];
        }   
        for (auto ch : s){
            cout << map[ch];
        }
        cout<<endl;
    }
    return 0;
}