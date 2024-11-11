#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    vector<string> v(t);
    for(auto &e:v){
        cin>>e;
    }
    map<string,int> mp;
    string s;
    while(t--){
        mp[v[t]]++;
        if(mp[v[t]]==1){
            string d=v[t];
            reverse(d.begin(),d.end());
            s+=d[1];
            s+=d[0];
        }
    }
    cout<<s<<endl;
    

    return 0;
}