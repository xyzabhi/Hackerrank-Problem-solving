#include<bits/stdc++.h>
int main()
{
using namespace std;
int n;
int min;
int max;
cin>>n;
int x;
cin>>x;
min=x;
max=x;
int max_c=0;
int min_c=0;
for(int i=0;i<n-1;i++)
{
int x;
cin>>x;
if(x>max)
{
max_c++;
max=x;
}
if(x<min)
{
min_c++;
min=x;
}
}
cout<<max_c<<" "<<min_c<<endl;
return 0;
}
