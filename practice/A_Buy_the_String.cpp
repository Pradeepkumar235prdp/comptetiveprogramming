#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
 
	ll t;
	cin >> t;
 
	while(t--) {
 
		int n,p0,p1,h;
		cin >> n >> p0 >> p1 >> h;
 
		string s;
		// getline(cin,s);
        cin>>s;
 
		int sum = 0;
 
		for (char c: s) {
			if (c == '0') {
				sum += min(p0, p1 + h);	
			} else {
				sum += min(p1, p0 + h);
			}
		}
 
		cout << sum<<endl;
	}
 
	return 0;
}