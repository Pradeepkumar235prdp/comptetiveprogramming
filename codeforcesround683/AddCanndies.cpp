#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		cout<<n<<endl;
		for(int i=1;i<=n;i++)
		cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}