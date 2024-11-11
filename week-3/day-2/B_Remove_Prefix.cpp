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
        vector<int> v(n);
        map<int,int> mp;
        for(auto&e:v){
            cin>>e;
            mp[e]++;
        }
        int r=n;
        int ans=0;
        int i=0;
        while(mp.size()!=r){
            ans++;
            mp[v[i]]--;
            if(mp[v[i]]==0){
                mp.erase(v[i]);
            }
            i++;
            r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}