#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,t;
   cin>>a>>b>>t;
   int i=1,ans=0;
   while(i*a<=(t+0.5)){
    ans+=b;
    i++;
   }
   cout<<ans<<endl;
}