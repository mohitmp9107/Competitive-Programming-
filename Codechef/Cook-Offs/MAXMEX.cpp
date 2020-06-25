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
        ll n,m; cin >>n >> m;
        vll a(n);
        ll f=-1,cnt=0;
        map<ll,ll> mp;
        rep(i,n){
            cin >> a[i];
            mp[a[i]]++;
            if(a[i]>m)cnt++;
        }
        repA(i,1,m-1){
            if(mp[i]==0){
                f=1;
                break;
            }else{
                f=0;cnt+=mp[i];
            }
        }
        if(f==1){
            cout << -1 << endl;
        }else if(f==0){
            cout << cnt << endl;
        }

    }
}
