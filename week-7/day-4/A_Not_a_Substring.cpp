#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string t1, t2;

        for (int i = 0; i < s.size(); i++)
            t1 += "()";
        for (int i = 0; i < s.size(); i++)
            t2 += '(';
        for (int i = 0; i < s.size(); i++)
            t2 += ')';

        if (t1.find(s) == string::npos)
        {
            cout << "YES" << endl;
            cout << t1 << endl;
        }
        else if (t2.find(s) == string::npos)
        {
            cout << "YES" << endl;
            cout << t2 << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}