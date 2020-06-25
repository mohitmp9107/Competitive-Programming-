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
vector<ld> a(N),b(N);
vector<vector<ll>> g;
vector<bool> vis(N,false);
vll use;
void dfs(ll u,ld mx){
    vis[u] =true;
    use.pb(u);
    trav(v,g[u]){
        if(!vis[v] and a[v]==mx){
            dfs(v,mx);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll n,m;
        cin >> n >> m;
        g.clear();
        g.resize(n+3);
        repA(i,1,n) cin >> a[i];
        repA(i,1,n) cin >> b[i];

        ld mx =0.0;
        repA(i,1,n){
            a[i]/= b[i];
            vis[i]=false;
            mx = max(mx,a[i]);
        }

        rep(i,m){
            ll u,v; cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }

        vll kingdom;
        repA(i,1,n){
           if(!vis[i] and a[i]==mx){
                use.clear();
                dfs(i,mx);
                if(sz(use)>sz(kingdom)){
                    kingdom.clear();
                    trav(pp,use) kingdom.pb(pp);
                }
           }
        }
        cout << sz(kingdom) << endl;
        trav(i,kingdom){
            cout << i << " ";
        }
        cout << endl;
    }
}
