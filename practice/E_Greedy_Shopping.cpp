#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 
{
    ll n,q;
    cin>>n>>q;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum[n];ll sum1=0;
    for(i=0;i<n;i++)
    {
    	sum1+=a[i];
    	sum[i]=sum1;
    }
    while(q--)
    {
        ll t,x,y;
        cin>>t>>x>>y;
        x=x-1;
        if(t==1)
        {
        	if(a[x]<y)
            {
            	ll sum2=0;
            	for(i=0;i<x;i++)
            	{
                	a[i]=y;
 
 
            	}
            }
        }
        else
        {
 
            int counter=0;
            i=x;
            while(y!=0 && i!=n)
            {
                if(a[i]<=y)
                {
                    counter++;
                    y=y-a[i];
 
                }
                i++;
            }
            cout<<counter<<"\n";
        }
    }
}