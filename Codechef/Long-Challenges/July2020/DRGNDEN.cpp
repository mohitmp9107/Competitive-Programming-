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
    //freopen("input.   txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        // cin >> tt;
    while((tt)--){

        // This is partially Accepted Answer

        ll n,Q; cin >> n >> Q;
        vll h(n+1); repA(i,1,n) cin >> h[i];
        vll a(n+1); repA(i,1,n) cin >> a[i];

        while(Q--){
            ll x,y,z; cin >> x >> y >> z;
            ll ans =0,f=0;

            if(x==1){
                a[y]=z;
            }else{
                if(y==z){
                    cout << a[y] << endl;
                    continue;
                }
                if(h[y]>h[z]){
                    // cout << "1" << endl;
                    ll p = h[z];
                    ans += a[z];
                    if(y>z){
                        // cout << "1a" << endl;
                        repA(i,z+1,y){
                            if(h[i]>p){
                                if(i==y){
                                    f=1;
                                    ans+=a[i];
                                    p = h[i];
                                    break;
                                }
                                else if(h[i]<h[y]){
                                    p = h[i];
                                    ans+=a[i];
                                }else if(h[i]>=h[y]){
                                    f=0;break;
                                }
                            }

                        }
                    }else{
                        repD(i,z-1,y){
                            if(h[i]>p){
                                if(i==y){
                                    f=1;
                                    ans+=a[i];
                                    p = h[i];
                                    break;
                                }
                                else if(h[i]<h[y]){
                                    p = h[i];
                                    ans+=a[i];
                                }else if(h[i]>=h[y]){
                                    f=0;break;
                                }
                            }
                        }
                    }
                    if(f){
                        cout << ans << endl;
                    }else{
                        cout << -1 << endl;
                    }
                }
                else{
                    cout << -1 << endl;
                }
            }
        }
    }
}
