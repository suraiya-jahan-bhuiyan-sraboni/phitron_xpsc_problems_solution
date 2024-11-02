#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s,ans;
        cin>>s;
        int n=s.size();
        int f=0;
        for(int i=0;i<n;i++){
         ans.push_back(s[i]);
         if(!f&&s[i]==s[i+1]){
            f=1;
            if(s[i]=='a') ans.push_back('b');
            else
                ans.push_back('a');
            }
        }
        if(f==0){
            if (s[n-1] == 'a')
                ans.push_back('b');
            else
                ans.push_back('a');
        }
        cout<<ans<<endl;
    }

    return 0;
}