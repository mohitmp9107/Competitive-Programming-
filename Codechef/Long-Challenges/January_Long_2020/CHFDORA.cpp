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
#define fst first
#define snd second
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
            ll n,m ; cin >> n >> m ;
            ll a[n][m];
            rep(i,n){
                rep(j,m){
                    cin >> a[i][j];
                }
            }
            ll ans=0;
            ans+=(n*m);
            repA(i,1,n-2){
                repA(j,1,m-2){
                    ll k=1;
                    while(1){
                        if(j-k>=0 && i-k>=0 && j+k<m && i+k<n){
                            if(a[i][j-k]==a[i][j+k] and a[i-k][j]==a[i+k][j]){
                                ans++; k++;
                            }else{
                              break;
                            }
                        }
                        else{
                            break;
                        }
                    }
            }
        }
        cout << ans << endl;

    }
}


