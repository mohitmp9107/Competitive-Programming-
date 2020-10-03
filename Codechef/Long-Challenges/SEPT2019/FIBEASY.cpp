#include <bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
ll f[61];
void fib()
{
    f[0]=0 ,f[1]=1;
    for(int i=2;i<60;i++){
        f[i] = (f[i-1] + f[i-2])%10;
    }
}
ll Logg(ll n)
{
    ll cnt=0;
    while(n>0){
        cnt++; n>>=1;
    }
    return cnt-1;
}
ll power(ll x, ll y)
{
    ll res=1;
    while(y>0){
        if(y&1)  res=res*x;
        y>>=1;
        x=x*x;
    }
    // cout << res << endl;
    return res;
}
int32_t main()
{
   ios::sync_with_stdio(false);
    cin.tie(0);
    fib();
    int t; cin >> t;
    while(t--){

        ll n; cin >> n;
        ll k= Logg(n);
            ll p=  power(2,k);
        // ll p= power(2,n);
        // cout << p << endl;
            p%=60;
        //     cout << p << endl;
         cout << f[p-1] << endl;
    }

}
