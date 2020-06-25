#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fill(a)  memset(a, 0, sizeof (a))
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
ll pow(ll x, ll n)
{
    if(n==0){
        return 1;
    }
    if(n==1){
      return x;
    }
    if(n==2){
      return x*x;
    }
    if(n&1){ // Power is odd
        ll val=pow(x,n/2);
        return val*val*x;
    }else{ // Power is even
        ll val=pow(x,n/2);
        return val*val;
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int tt=1;
    ll tt;
    cin >> tt;
    while((tt)--){
       ll n; cin >> n;
        ll a,b,c,d,e,s=0;
        cin >> a;
      ll t= pow(10,n);
         s=(2*t)+a;
        cout << s << endl;
        cout << flush;
        cin >> b;
        c= t-b;
        cout << c  << endl;
        cout << flush;
        cin >> d;
        e= t-d;
        cout << e << endl;
        cout << flush;
        ll ans ;
        cin >> ans;
        // cout << endl;
        cout << flush;
        if(ans==1){
            continue;
        }else{
          return 0;
        }


   }
   return 0;

}


