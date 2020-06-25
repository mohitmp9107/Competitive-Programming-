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
        vector<string> s(2);
        ll f=-1;
        s[1] = "FastestFinger";
        s[0] = "Ashishgup";
        if(n==1){
            cout << s[1] << endl;
        }else if(n==2){
            cout << s[0] << endl;
        }else if(n&1){
            cout << s[0] << endl;
        }
        else{
            ll flag = 0,pp=0;
            ll cnt=0;
                while(1){

                    flag=0;
                    if(n&1){
                        n/=n; cnt++;
                    }
                    for(ll i=3;i<=sqrt(n) and n>1;i++){
                        if(n<=1){
                           pp=1; break;
                        }
                        if(n%i==0 and i&1){
                            n /=i;
                            cnt++;
                            break;
                        }else if(n%(n/i)==0 and (n/i)&1){
                            n /=(n/i);
                            cnt++;
                            break;
                        }
                    }
                        if(n<=1){
                            if(cnt%2==0)f=1;
                            else f=0;
                            break;
                        }
                        else{
                            n--; cnt++;
                        }
                    if(pp){
                        break;
                    }
                }
                assert(f!=-1);
                cout << s[f] << endl;
            }
    }
}
