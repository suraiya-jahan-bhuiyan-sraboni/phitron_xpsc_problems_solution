
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z;
    cin>>x>>y>>z;
    int remaining=4-(x+y+z);
    int a=x+y*0.5;
    int b=z+y*0.5;
    if(a+remaining>b){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

