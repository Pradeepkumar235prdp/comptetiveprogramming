#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=0,k=0,c=0;
        while(x<n)
        {
            k++;
            x=x+k;
            c++;
        }
        // while(x!=n)
        // {
        //     x--;
        //     c++;
        // }
        if(n==x-1)
        {
            cout<<c+1<<endl;
        }
        else
        {
        cout<<c<<endl;
        }
        
        

}
return 0;
}

