

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
int n;
cin>>n;
int gifts[n];
int values[n];
int entry;
for(int i=0;i<n;i++)
{
cin>>entry;
gifts[i]=entry;
values[i]=entry;
}
sort(values , values+n);
int gift;
for(int k=0;k<n;k++)
{
gift=values[k];
 
for(int j=0;j<n;j++)
{
if(gifts[j]==gift)
	{cout<<(j+1)<<" ";break;}
 
 
}
}
return 0;
 
}
 