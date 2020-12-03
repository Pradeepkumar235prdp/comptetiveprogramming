#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// #define see(x) cout<< #x <<" = "<< x <<' ';
// #define seen(x) cout<< #x <<" = "<< x <<'\n';
// #define UWU cout<<'\n';

ll p1 = 1000Q,F[1000],a[1000];

void mdp(ll z,ll val){
    while(z <= p1){
        F[z] += val;
        z += z & (-z);
    }
}
ll cnt(ll z){
    ll sum = 0;
    while(z > 0){
        sum += F[z];
        z -= z & (-z);
    }
    return sum;
}
void res(){
    ll n, x, cnt = 0, stt = 0;
    cin>>n>>x;
    for(ll i = 1 ; i <= 1000 ;i++)
    {
        F[i] = 0;
    } 
    mpd(x,1);
    for(ll i = 1 ; i <= n ; ++i){
        cin>>a[i];
        if(i > 1){
            if(a[i] < a[i-1]) stt++;
        }
        mdp(a[i],1);
    }
    if(stt == 0){
        cout<<0;
        return;
    }
    for(ll i = 1 ; i <= n ; ++i){
        ll tmp = cnt(a[i] - 1);
        if(tmp <= i - 1){
            if(i > 1){
                if(a[i] < a[i-1]){
                    cout<<-1;
                    return;
                }else continue;

            }
        }

        if(x > a[i]){
            cout<<-1;
            return;
        }

        swap(a[i],x);

        tmp = cnt(a[i] - 1);

        if(tmp < i - 1){
            cout<<-1;
            return;
        }
        if(i > 1){
            if(a[i] < a[i-1]){
                cout<<-1;
                return;
            }
        }

        cnt++;
    }
    cout<<cnt;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        res();
        cout<<'\n';
    }
}

