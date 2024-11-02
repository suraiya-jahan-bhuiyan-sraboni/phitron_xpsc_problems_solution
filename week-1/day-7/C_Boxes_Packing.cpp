#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    map<int, int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[a]++;
    }

    int maxf= 0;
    for (auto [x, y] : v)
    {
        maxf = max(maxf, y);
    }

    cout << maxf << endl;

    return 0;
}