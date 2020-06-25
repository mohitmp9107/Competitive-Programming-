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
        ll n; cin >> n;

        vll a(2*n+1);
        vll e,o;
        repA(i,1,2*n){
            cin >> a[i];
           if(a[i]&1) o.pb(i);
           else e.pb(i);
        }
        if(sz(o)==0){
            e.pop_back(); e.pop_back();
            rep(i,sz(e)-1){
                cout << e[i] << " " <<e[i+1] << endl;
                i++;
            }
            continue;
        }
        if(sz(e)==0){
            o.pop_back(); o.pop_back();
            rep(i,sz(o)-1){
                cout << o[i] << " " << o[i+1] << endl;
                i++;
            }
            continue;
        }
        else if(sz(o)%2==0 and sz(e)%2==0){

            o.pop_back(); o.pop_back();
            rep(i,sz(o)-1){
                 cout << o[i] << " " << o[i+1] << endl;
                 i++;
            }
            rep(i,sz(e)-1){
                cout << e[i] << " " <<e[i+1] << endl;
                i++;
            }
        }else if(sz(o)%2==1 and sz(e)%2==1){
            o.pop_back(); e.pop_back();
            rep(i,sz(o)-1){
                 cout << o[i] << " " << o[i+1] << endl;
                 i++;
            }
            rep(i,sz(e)-1){
                cout << e[i] << " " <<e[i+1] << endl;
                i++;
            }
        }
    }
}
