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
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll n,m; cin >> n >> m;
        vll a(n);
        set<ll> se;
        rep(i,n){
            cin >> a[i];
        }
        rep(i,m){
            ll x; cin >> x;
            se.insert(x);
        }
        int f=0;
        for(ll i=0;i<n-1;i++){
            if(a[i+1] < a[i] and se.find(i+1)!=se.end()){
                swap(a[i+1],a[i]);
            }else if(a[i+1] < a[i] and se.find(i+1)==se.end()){
                f=1; break;
            }
        }
        if(f){
            cout << "NO" << endl;
            continue;
        }
        int t=n;f=0;
        while(t--){
            for(ll i=0;i<n-1;i++){
                if(a[i+1] < a[i] and se.find(i+1)!=se.end()){
                    swap(a[i+1],a[i]);
                }else if(a[i+1] < a[i] and se.find(i+1)==se.end()){
                    f=1; break;
                }
            }
            if(f){
                break;
            }
        }
        if(f){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }
}
