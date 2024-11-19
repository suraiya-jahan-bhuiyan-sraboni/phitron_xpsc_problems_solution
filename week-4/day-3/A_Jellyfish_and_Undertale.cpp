#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long >v(n);
        long long ans=b;
        for(auto&e:v){
            cin>>e;
            ans+=min(a-1,e);
        }
        cout<<ans<<endl;
    }

    return 0;
}