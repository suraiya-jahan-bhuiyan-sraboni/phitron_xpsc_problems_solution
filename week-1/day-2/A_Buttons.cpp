#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int coins=0;
    if(a==b){
        coins+=a+b;
    }else if(a>b){
        coins+=a;
        a--;
        if(a>=b){
            coins+=a;
        }else{
            coins+=b;
        }
    }else{
        coins += b;
        b--;
        if (b >= a)
        {
            coins += b;
        }
        else
        {
            coins += a;
        }
    }
    cout<<coins<<endl;
}