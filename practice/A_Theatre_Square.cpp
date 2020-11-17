#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll n,m,a,res1,res2;
cin>>n>>m>>a;
res1= (m%a==0)?(m/a):(m/a)+1;
res2= (n%a==0)?(n/a):(n/a)+1;
cout<<res1*res2<<endl;
}