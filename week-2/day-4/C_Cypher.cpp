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
        vector<int> a(n);
        for(auto &e:a){
            cin>>e;
        }
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            string s;
            cin>>s;
            for(int j=0;j<m;j++){
                if(s[j]=='D'){
                    a[i]++;
                }else if(s[j]=='U'){
                    a[i]--;
                }
                if(a[i]<0){
                    a[i]+=10;
                }
                if (a[i] > 9)
                {
                    a[i] -= 10;
                }
            }
        }
        for(auto e:a){
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}