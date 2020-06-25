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

const ll N = 2e5+5;
ll n,k;
vll a(N);

bool check(ll x,ll which){
    ll len=0;
    rep(i,n){
        if(which){
            len++; which ^=1;
        }else{
            if(a[i]<=x){
                len++; which ^=1;
            }
        }
    }
    return len>=k;
}

ll binSearch(ll lo,ll hi){

    while(lo<hi){
        ll mid = (lo+hi)/2;
        if(check(mid,0) or check(mid,1))
            hi = mid;
        else lo = mid+1;
    }
    return lo;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        // cin >> tt;
    while((tt)--){
        cin >> n >> k;
        rep(i,n){
            cin >> a[i];
        }
        ll ans = binSearch(1ll,1e9);
        cout << ans << endl;
    }
}
// After Editorial
