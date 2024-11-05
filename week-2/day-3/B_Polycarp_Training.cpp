#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    int ans=0,pb=1;
   while(!a.empty()){
    auto lb=a.lower_bound(pb);
    if(lb!=a.end()){
        ans++;
        a.erase(lb);
    }else{
        break;
    }
    pb++;
   }
   cout<<ans<<endl;

    return 0;
}