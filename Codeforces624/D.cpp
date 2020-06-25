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
const ll N= 2e4;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll a,b,c; cin >> a >> b >> c;
        ll already = 1e9;
        vll ans ;
        for(ll i=1;i<=N; i++){
            for(ll j=i;j<=N ; j+=i){
                for(ll k=j;k<=N ; k+=j){
                    ll temp = abs(a-i)+abs(b-j)+abs(c-k);
                    if(temp < already){
                        already = temp;
                        ans = {i,j,k};
                    }
                }
            }
        }
        cout << already << endl;
        cout << ans[0] << " " << ans[1] << ' ' << ans[2] << endl;
    }
}
