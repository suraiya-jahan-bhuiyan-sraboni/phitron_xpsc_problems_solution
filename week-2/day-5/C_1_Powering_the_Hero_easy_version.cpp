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
        for(int &e:a){
            cin>>e;
        }
        priority_queue<int, vector<int>> pq;
        long long pow=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                if(!pq.empty()){
                    pow+=pq.top();
                    pq.pop();
                }
            }else{
                    pq.push(a[i]);
                }
        }
        cout<<pow<<endl;
    }

    return 0;
}