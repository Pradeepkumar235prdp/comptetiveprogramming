#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void res()
{
    ll x,y;
		cin>>x>>y;
		ll c1=0,c2=0;
		if(x>y) {
			c1=c1+(x-y);
			c2=c2+(y);
		}
		else {
			c1=c1+(x-1);
			c2=c2+(y-x+1);
		}
		// cout<<c1<<" "<<c2<<endl;
        cout<<x-1<<" "<<y<<endl;
    
}
 
int main() {
	ll t;
	cin>>t;
	while(t--){
        res();
	}
	return 0;
}