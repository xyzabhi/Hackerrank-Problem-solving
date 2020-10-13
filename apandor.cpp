#include<iostream>
int main()
{
using namespace std;
int s,t;
cin>>s>>t;
int a,b;
cin>>a>>b;
int m,n;
cin>>m>>n;
int apcount=0;
while(m--)
{
int x;
cin>>x;
if((a+x)>=s && (a+x)<=t)
apcount++;
}
int orcount=0;
while(n--)
{
int x;
cin>>x;
if((b+x)>=s && (b+x)<=t)
orcount++;
}
cout<<apcount<<endl;
cout<<orcount<<endl;
return 0;
}


