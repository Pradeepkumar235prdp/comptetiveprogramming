#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   
    ll a[5][5];
    ll x,y;
    for(ll i=0;i<5;i++)
    {
        for(ll j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<5;i++)
    {
        for(ll j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                 x=i;
                 y=j;
                break;
            }
        } 
    }
    cout<<abs(x-2)+abs(y-2)<<endl;
}