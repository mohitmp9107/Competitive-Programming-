#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template < typename T > using oset = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
// find_by_order(k) (k+1)th largest element
// order_of_key(k) no of elements <=k

typedef long long ll;
typedef long double ld;
#define endl '\n'
#define rep(i,n)  for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define ff first
#define ss second
#define pb push_back
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpl;
const ld PI = 4*atan((ld)1);
const ll INF = 1e18;
const ll mod = 1e9+7;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        vll a(3),b(3);
        rep(i,3) cin >> a[i];

        rep(i,3) cin >> b[i];

        ll ans =0;
        ll t =min(a[2],b[1]);
        ans += 2*t;
        a[2]-= t;
        b[1]-=t;

        // cout << "here " << ans << endl;
        t= min(a[1],b[1]);
        a[1]-=t;
        b[1]-=t;

        if(a[1]){
            t= min(a[1],b[0]);
            a[1]-=t;
            b[1]-=t;
        }

        if(b[2]){
            t = min(a[0],b[2]);
            a[0]-= t;
            b[2]-=t;
        }
        if(b[2]){
            t  = min(a[2],b[2]);
            a[2]-= t;
            b[2]-=t;
        }

        if(b[2]){
            t = min(a[1],b[2]);
            ans -=t*2;

            a[1]-=t;
            b[2]-=t;
        }
        // rep(i,3)cout << a[i] << " "; cout << endl;
        // rep(i,3)cout << b[i] << " "; cout << endl;
        cout << ans << endl;
    }
}
