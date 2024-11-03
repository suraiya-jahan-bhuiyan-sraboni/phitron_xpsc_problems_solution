#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
         int f=0;
        
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (t[i] != 'R')
                {
                    cout << "NO"<<endl;;
                    f=1;
                    break;
                }
            }
            else
            {
                if (t[i] == 'R')
                {
                    cout << "NO"<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0) cout << "YES"<<endl;
        
    }

    return 0;
}