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
    // cin >> tt;
    while((tt)--){
        ll n,q; cin >> n >> q;
        vll a(n);
        rep(i,n){
            cin >> a[i];
        }
        vll in(n,0),d(n,0);
        ll f=-1;
        for(int i=1;i<n;){
            ll j=i+1,f2=0;
            while(a[i]>a[i-1]){
              if(f!=0){
                f=0;
                    in[i]=in[i-1]+1;
                    d[i] = d[i-1];
                }else{
                    in[i]=in[i-1];
                    d[i] = d[i-1];
                }
                 i++; f2=1;
            }
            if(f!=1 and !f2){
                f=1; in[i]=in[i-1];
                d[i] = d[i-1]+1;

            }else if(!f2){
                d[i] = d[i-1];
                in[i] = in[i-1];
            }
            if(!f2)i++;

        }
        while(q--){
            ll l,r; cin >> l >> r;
            ll ans2,ans1;
             ans1=in[r-1]-in[l-1]; ans2=d[r-1]-d[l-1];
                if(in[l-1]==in[l] && a[l]>a[l-1]) ans1++;
                if(d[l-1]==d[l] && a[l]<a[l-1]) ans2++;

            (ans2==ans1)?cout <<"YES" << endl : cout << "NO" << endl;
        }

    }
}


