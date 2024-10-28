#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s=to_string(n);
    int l=s.size();
    if(l<4){
        int zero=4-l;
        string ch;
        int i=0;
        while(zero--){
            ch+='0';
            i++;
        }
        cout<<ch+s<<endl;
    }else{
        cout<<s<<endl;
    }
}