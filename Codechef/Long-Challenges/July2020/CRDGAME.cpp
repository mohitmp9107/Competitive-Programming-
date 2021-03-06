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

ll power(ll x){
    ll res=0;
    while(x){
        res+= (x%10);
        x/=10;
    }
    return res;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll n; cin >> n;
        ll chef=0,monty=0;
        rep(i,n){
            ll x,y; cin >> x >> y;
            ll a=power(x),b=power(y);
            if(a>b){
                chef++;
            }else if(b>a)monty++;
            else{
                chef++; monty++;
            }
        }
        if(chef==monty){
            cout << 2 << " " << chef << endl;
        }else if(chef>monty){
            cout << 0 << " " << chef << endl;
        }else{
            cout << 1 << " " << monty << endl;
        }
    }
}
