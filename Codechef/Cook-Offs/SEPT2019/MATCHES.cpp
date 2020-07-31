#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll cnt[10]={6,2,5,5,4,5,6,3,7,6};
    ll t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        ll c = a+b;
        ll ans=0;
        while(c>0){
            ll p= c%10;
            ans+= cnt[p];
            c = c/10;
        }
        cout << ans << endl;
    }
    return 0;
}


