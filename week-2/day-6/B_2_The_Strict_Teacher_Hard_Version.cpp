#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 1; i <= q; i++)
        {
            int b;
            cin >> b;
            int k = upper_bound(a.begin(), a.end(), b) - a.begin();

            if (k == 0)
                cout << a[0] - 1 << ' ';
            else if (k == m)
                cout << n - a[m - 1] << ' ';
            else
                cout << (a[k] - a[k - 1]) / 2 << ' ';
        }
        cout << endl;
    }
}