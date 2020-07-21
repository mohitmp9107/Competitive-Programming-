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
        map<ll,ll>m1,m2;
        ll mn = INF;
        rep(i,n){
            ll x; cin >> x;
            m1[x]++; mn = min(mn,x);
        }
        rep(i,n){
            ll x; cin >> x; m2[x]++;
            mn = min(mn,x);
        }
        ll f=0;
        vll A,B;
        trav(p,m1){
            if(m2[p.ff]){
                ll u = p.ss-m2[p.ff];
                if(u>0){
                    if(u%2){
                        f=1;
                        break;
                    }
                    rep(i,u){
                        A.pb(p.ff);
                    }
                }else{
                    u*=-1;
                    if(u%2){
                        f=1; break;
                    }
                    rep(i,u)B.pb(p.ff);
                }
                m2.erase(p.ff);
            }else{
                if(p.ss%2){
                    f=1; break;
                }
                rep(i,p.ss)A.pb(p.ff);
                m2.erase(p.ff);
            }
        }
        if(f){
            // cout << "t1" << endl;
            cout << -1 << endl;
            continue;
        }
        trav(p,m2){
            rep(i,p.ss)B.pb(p.ff);
        }

        if(sz(A)==0 and sz(B)==0){
            cout << 0 << endl;
            continue;
        }
        if(sz(A)==0 or sz(B)==0 or sz(A)!=sz(B)){
            // cout << "t2" << endl;
            cout << -1 << endl;
            continue;
        }
        sort(all(A));
        sort(all(B));

        ll i=0,j=sz(B)-1;
        ll ans =0;
        while(i<sz(A) and j>=0){
            ans += min(2*mn,min(A[i],B[j]));
            i+=2 ; j-=2;
        }

        cout <<  ans << endl;
    }
}
