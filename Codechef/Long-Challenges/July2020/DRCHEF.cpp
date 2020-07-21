/*
“All that is gold does not glitter,
Not all those who wander are lost;
The old that is strong does not wither,
Deep roots are not reached by the frost.

From the ashes a fire shall be woken,
A light from the shadows shall spring;
Renewed shall be blade that was broken,
The crownless again shall be king.”
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define rep(i, n)    for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fill(a)  memset(a, 0, sizeof (a))
#define ff first
#define ss second
#define pb push_back
typedef long double ld;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpl;
const ll INF = 1e18;
const ld PI = 4*atan((ld)1);
const ll mod = 1e9+7;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll n,x; cin >> n >> x;
        vll a(n); rep(i,n) cin >> a[i];

        sort(all(a));

        ll p=0;
        if(find(all(a),x)!=a.end()){
            p = distance(a.begin(),find(all(a),x));
        }else{
            rep(i,n){
                if(x>a[i])p++;
            }
        }
        ll t=0;
        for(ll i=p;i<n;i++){
            // are you doing good?
            if(x<a[i]){
                // nope
                while(x<a[i]){
                    x*=2;
                    t++;
                }
                t++;
            }else t++;
            x = 2*a[i];
        }

        ll ans = p+t;
        if(p) t=0,p--;
        for(ll i=p;i<n;i++){
            // then what's the problem
            if(x<a[i]){
                // nothing
                while(x<a[i]){
                    x*=2;t++;
                }
                t++;
            }else t++;
            x=2*a[i];
        }
        ans = min(t+p,ans);

        cout << ans << endl;
    }
}
