#include <iostream>
using namespace std;
#define ll long long
const int iNT_MAX = (int)1e9;
const int iNT_MIN = (int)1e9;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		ll s = 0;
		int cnt = 0;
		int id = iNT_MAX;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				ll p;
				cin >> p;
				s += abs(p);
				if(p < 0)cnt++;
				if(p == 0){
					id = iNT_MIN;
				}
				if(abs(p) < id)id = abs(p);
			}
		}
		if(cnt % 2 == 0){
			cout << s << '\n';
			continue;
		}
		if(id == iNT_MIN){
			cout << s << '\n';
		}else{
			cout << s - 2 * id << '\n';
		}
	}
	return 0;
}