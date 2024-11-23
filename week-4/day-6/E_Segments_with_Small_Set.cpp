#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAXN = 1e5 + 5;
    int a[MAXN];
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for (auto &x : v) cin>>x;
    long long ans = 0;
    long long l = 0, num = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!a[v[i]]++)
        {
            if (++num > k)
            {
                while (true) if (--a[v[l++]] == 0) break;
            }
        }
        ans += i - l + 1;
    }
    cout<<ans<<endl;
    return 0;
}