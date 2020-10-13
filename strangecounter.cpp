#include<bits/stdc++.h>
int main()
{
using namespace  std;
long t;
cin>>t;
long  time=3;
while(1){
t=t-time;
if(t<=0)
{
t+=time;
cout<< time-t+1<<endl;
return 0;
}
time*=2;
}
}

