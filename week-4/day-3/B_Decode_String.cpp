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
        string s;
        cin>>s;
        int i=n-1;
        string res;
        while (i >= 0)
        {
            if (s[i] != '0')
            {
                int c=s[i]-'1';
                res += char('a' + c);
                i--;
            }
            else
            {
                int number = stoi(s.substr(i - 2, 2))-1;
                res += char('a' + number);
                i -= 3;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}