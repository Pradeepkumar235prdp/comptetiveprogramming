#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    ll i=0,c=0;
    while(s[i++]=='+')c++;
    s.erase(s.begin(),s.begin() + c);
    i=0;
    ll l=s.length();
    while(l--)
    {
    
    if(l==0)
    {
        cout<<s[i];
    }
    else
    {
        cout<<s[i]<<"+";
    }
    
    i++;
    }
}