#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int a[26]={0};
    for(int i=0;i<l;i++){
        a[s[i]-'a']++;
    }
    bool f=false;
    for(char i='a';i<='z';i++){
        if(a[i-'a']==0){
            cout<<i<<endl;
            f=true;
            break;
        }
    }
    if(!f){
        cout<<"None"<<endl;
    }
}