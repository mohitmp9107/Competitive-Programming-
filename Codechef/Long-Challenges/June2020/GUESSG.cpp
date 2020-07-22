#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        // cin >> tt;
    while((tt)--){
        // partially accepted answer
        ll n; cin >> n;
        char ch[5];
        ll x=(1+n)/2,f=0;
        repA(i,1,4){
            cout << x << endl;
            cin >> ch[i];
            if(ch[i]=='E'){
                f=1;break;
            }
        }
        if(f){
            break;
        }
        if(ch[1]==ch[3]  and ch[2]!=ch[4]){
            // first and third are true
            ll l=1,r=n;
            char res = ch[1],actual;
            if(res=='L') r = x;
            else if(res='G') l = x;

            while (1) {
                ll mid = (l + r + 1) / 2;

                repA(i,1,2){
                    cout << mid << endl;
                    cin >> res;
                    if(i==1) actual = res;
                    if(res=='E') break;
                }
                if (actual=='L')
                    r = mid;
                else if(actual=='G')
                    l = mid;
                else
                    break;
            }
        }else if(ch[1]!=ch[3] and ch[2]==ch[4]){
            // second and fourth are true
            ll l=1,r=n,f=0;
            char res = ch[2];
            if(res=='L') r = x;
            else if(res=='G') l = x;

            while (res!='E') {
                ll mid = (l + r + 1) / 2;

                rep(i,2){
                    cout << mid << endl;
                    cin >> res;
                    if(res=='E'){
                         break;
                    }
                }

                if (res=='L')
                    r = mid;
                else if(res=='G')
                    l = mid;
                else break;
            }
        }else if(ch[1]==ch[3] and ch[2]==ch[4] and (ch[1]==ch[2])){
                // 1 3 5 ..
                ll l=1,r=n;
            char res = ch[1],actual;
            if(res=='L') r = x;
            else if(res='G') l = x;

            while (1) {
                ll mid = (l + r + 1) / 2;

                repA(i,1,2){
                    cout << mid << endl;
                    cin >> res;
                    if(i==1) actual = res;
                    if(res=='E') break;
                }
                if (actual=='L')
                    r = mid;
                else if(actual=='G')
                    l = mid;
                else
                    break;
            }
            }else if(ch[1]==ch[3] and ch[2]==ch[4] and ch[3]==ch[4]){
                // 2 4 6 ..
                ll l=1,r=n,f=0;
            char res = ch[2];
            if(res=='G') l = x;
            else if(res=='L') r = x;

            while (res!='E') {
                ll mid = (l + r + 1) / 2;

                rep(i,2){
                    cout << mid << endl;
                    cin >> res;
                    if(res=='E'){
                         break;
                    }
                }

                if (res=='L')
                    r = mid;
                else if(res=='G')
                    l = mid;
                else break;
            }
        }
    }
}
