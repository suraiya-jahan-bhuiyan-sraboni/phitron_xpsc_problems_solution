#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int> a(n),cnt(n);
    for(auto&e:a){
        cin>>e;
    }
    set<int>dp;
    for(int i=n-1;i>=0;i--){
        dp.insert(a[i]);
        cnt[i]=dp.size();
    }
    while(m--){
        int l;
        cin>>l;
        l--;
        cout<<cnt[l]<<endl;
    }

    return 0;
}