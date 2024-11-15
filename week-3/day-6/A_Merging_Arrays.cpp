#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m),c(n+m);
    for(auto&e:a) cin>>e;
    for(auto&e:b) cin>>e;
    int k=0,i=0,j=0;
    while(i<n||j<m){
        if((j==m||i<n)&&a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(auto e:c){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}