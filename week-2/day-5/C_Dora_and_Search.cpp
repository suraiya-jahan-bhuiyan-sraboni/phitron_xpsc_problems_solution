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
        int a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        set<int> st;
        for (int i = 1; i <= n; i++)
            st.insert(i);
        int l = 1, r = n;
        int flag;
        while (true)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();
            int flag = 0;
            if (mn == a[l] || mx == a[l])
            {
                st.erase(a[l]);
                l++;
                flag = 1;
            }
            if (mx == a[r] || mn == a[r])
            {
                st.erase(a[r]);
                r--;
                flag = 1;
            }
            if (flag == 0 || l > r)
                break;
        }
        if (l > r)
            cout << "-1" << endl;
        else
            cout << l << " " << r << endl;
    }
    return 0;
}