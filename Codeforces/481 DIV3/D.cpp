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
        // cin >> tt;
    repA(qq,1,tt){
        ll n ;cin >> n;
        vll b(n),a(n);
        rep(i,n) cin >> b[i];

        if(n<=2){
            cout << 0 << endl;
            return 0;
        }
        ll ans =n+1;
        for(ll d1:{-1,0,1}){
            for(ll d2:{-1,0,1}){
                 a[0] = b[0]+d1;
                 a[1] = b[1]+d2;

                ll d= a[1]-a[0];
                ll curr=abs(d1)+abs(d2),f=0;
                repA(i,2,n-1){
                    a[i] = a[0]+(i)*d;
                    if(abs(a[i]-b[i])<=1){
                        curr += abs(a[i]-b[i]);
                    }else{
                        f=1;break;
                    }
                }
                if(!f)ans = min(ans,curr);
            }
        }
        // cout << "here " << endl;
        if(ans==n+1){
            cout << -1 << endl;
            return 0;
        }
        assert(ans<=n);
        cout << ans << endl;
    }
}
