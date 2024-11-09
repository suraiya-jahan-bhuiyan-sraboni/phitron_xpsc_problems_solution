#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int nn;
        cin>>nn;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s=s+s;
        int ans=-1e9;
        int last=-1;
        int n=nn+nn;
        while(n--){
            if(s[n]=='g'){
                last=n;
            }
            if(s[n]==c){
                ans=max(ans,last-n);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}