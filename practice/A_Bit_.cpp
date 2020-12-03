#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 
{
    ll n;
    ll x=0;
    cin>>n;
    string s;
    while(n--)
    {
    cin>>s;
    if(s[1]=='+')
    {
        x++;
    }
    else
      if(s[1]=='-')
    {
        x--;
    }
    }
    cout<<x<<endl;
}