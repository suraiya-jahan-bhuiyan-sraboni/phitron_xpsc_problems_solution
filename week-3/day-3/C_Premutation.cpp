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
        int ar[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> idx;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i][n - 2]]++;
            idx[ar[i][n - 2]] = i;
        }
        int index, val;
        for (auto [x, y] : mp)
        {
            if (y == 1)
                index = x;
            else
                val = x;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << ar[idx[index]][i] << " ";
        }
        cout << val << endl;
    }

    return 0;
}