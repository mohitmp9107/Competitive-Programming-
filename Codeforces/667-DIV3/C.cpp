#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template < typename T > using oset = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
// find_by_order(k) (k+1)th largest element
// order_of_key(k) no of elements <=k

typedef long long ll;
typedef long double ld;
#define endl '\n'
#define rep(i,n)  for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define ff first
#define ss second
#define pb push_back
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpl;
const ld PI = 4*atan((ld)1);
const ll INF = LLONG_MAX;
const ll mod = 1e9+7;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    repA(qq,1,tt){
        ll n,x,y; cin >> n >> x >> y;
        vll a(n);

        if(n==2){
            cout << x << " " << y << endl;
            continue;
        }
        ll f1=0,f2=0;
        for(ll d=(y-x)/(n);d<=y-x;d++){
            repA(i,1,x){
                a[0] = i;
                f1=0,f2=0;
                if(a[0]==x)f1=1;
                if(a[0]==y)f2=1;
                repA(j,1,n-1){
                    a[j]=a[j-1]+d;
                    if(a[j]==x)f1=1;
                    if(a[j]==y)f2=1;
                }
                if(f1 and f2){
                    break;
                }
            }
            if(f1 and f2){
                 break;
            }
        }

        rep(i,n){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
