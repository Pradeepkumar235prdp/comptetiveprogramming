#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll n,x;
long int t,i,j,count;
cin>>t;
while(t--)
{
   count=0;
cin>>n>>x;
vector<int>v(n);
vector<int>v1(n);
for(i=0;i<n;i++)
{
cin>>v[i];
}
for(i=0;i<n;i++)
{
cin>>v1[i];
}

sort(v.begin(),v.end());
sort(v1.begin(),v1.end(),greater<int>());

for(i=0;i<n;i++)
{
if(v[i]+v1[i]>x)
{
    cout<<"No"<<endl;
    count++;
    break;

}

}
if(count==0)
{
    cout<<"Yes"<<endl;
}
}
}
