#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        string s = "";

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            for (char c = 'a'; c <= 'z'; c++)
            {
                if (cnt[c] == a[i])
                {             
                    cnt[c]++; 
                    s += c;
                    break;
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}