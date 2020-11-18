#include<bits/stdc++.h>
using namespace std;
#define ll long long int

using namespace std;
 
 void result()
 {
     ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll p=n*k;
        vector<int> v(p);
        for (int j = 0; j < p; ++j)
        {
            cin >> v[j];
        }
 
        int mid;
        if (n % 2 == 0)
        {
            mid = n / 2;
        }
        else
        {
            mid = n / 2 + 1;
        }
 
        int up = n - mid, lw = mid - 1;
        int sum = 0;
        int j = p - 1 - up;
        for(int t = 0; t < k; ++t)
        {
            sum += v[j];
            j -= up + 1;
        }
        cout << sum << '\n';
    }
 }
int main()
{
    result();
    return 0;
}