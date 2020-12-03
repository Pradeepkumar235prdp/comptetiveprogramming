#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll n,m,r,c;
ll t;
cin>>t;
while(t--)
{
cin>>n>>m>>r>>c;
// cout<<abs(n-r)+abs(m-c)<<endl;
ll a= max(r+c-2,r+m-c-1);
ll b=max(n-r+c-1,n-r+m-c);
cout<<max(a,b)<<endl;
}
}
