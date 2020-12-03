#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;
vector<ll>v(n);
vector<ll>v1;
set<ll>s;

for(ll i=0;i<n;i++)
{
    cin>>v[i];
}
ll i=2,count1=1,res=0;
ll xr=v[0]^v[1];

while(v[i]>=xr && i<n)
{
    xr=xr^v[i];
    // v1.push_back(xr);
    count1++;
    i=i+1;
    res++;

}





// for(ll j=0;j<v1.size();j++)
// {
//     cout<<v1[j]<<" ";
// }

if(xr == 0)
{
    cout<<-1<<endl;
}
else
{
cout<<count1<<endl;
}


}
