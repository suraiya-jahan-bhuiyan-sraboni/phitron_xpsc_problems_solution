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
        int ans[n+1][n+1];
        int o=1, m=n*n;

        for(int i=1;i<=n;i++){
            if(i%2!=0){
                for (int j = 1; j <= n; j++)
                {
                  if(j%2==0){
                    ans[i][j]=m;
                    m--;
                  }else{
                    ans[i][j]=o;
                    o++;
                  }  
                }
            }else if(i%2==0){
                for (int j = n; j > 0; j--)
                {
                    if (j % 2 != 0)
                    {
                        ans[i][j] = m;
                        m--;
                    }
                    else
                    {
                        ans[i][j] = o;
                        o++;
                    }
                }
            }

            
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}