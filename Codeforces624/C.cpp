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
       ll n,m;  cin >> n>> m;
       string s; cin >> s;
        vll p(m);
        rep(i,m){
            cin >> p[i];
        }
        vll c(26,0);
        vector<vector<ll>> b(n,vector<ll>(26));
        rep(i,sz(s)){
            b[i][s[i]-'a']++;
            if(i!=sz(s)-1){
                rep(j,26){
                   b[i+1][j]+= b[i][j];
                }
            }
        }
        vll ans(26,0);
        rep(i,m){
            rep(j,26){
                ans[j]+=b[p[i]-1][j];
            }
        }
        rep(i,sz(s)){
            ans[s[i]-'a']++;
        }
        rep(j,26){
            cout << ans[j] << " ";
        }cout << endl;

    }
}
