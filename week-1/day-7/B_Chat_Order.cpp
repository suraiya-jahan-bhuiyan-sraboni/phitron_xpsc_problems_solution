#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<string> chat;
    map<string,int> map;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        chat.push_back(s);
    }
    for (int i = t - 1; i >= 0; i--)
    {
        map[chat[i]]++;
        if(map[chat[i]]==1){
            cout<<chat[i]<<endl;
        }
    }

    return 0;
}