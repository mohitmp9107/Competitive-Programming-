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

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int t=1;
    ll t;
    cin >> t;
    while((t)--){
        ll  s;

        int a,b,c;
        cin >> s >> a >> b >> c;

        if(s>=6){
            cout << 1 << endl;
            continue;
        }
        ll v[5][8]={{3,6,4,4,4,5,5,5},
                    {2,3,2,3,2,3,3,3},
                    {1,3,2,2,2,2,2,2},
                    {1,2,1,1,1,2,2,2},
                    {1,2,1,1,1,1,1,1}};
        int i;
        if(a==1 and b==1 and c==1) i=0;
        if(a==2 and b==2 and c==2) i=1;
        if(a==1 and b==1 and c==2) i=2;
        if(a==1 and b==2 and c==1) i=3;

        if(a==2 and b==1 and c==1) i=4;
        if(a==2 and b==2 and c==1) i=5;
        if(a==2 and b==1 and c==2) i=6;
        if(a==1 and b==2 and c==2) i=7;

        cout << v[s-1][i] << endl;
   }

}


// I know this is not good
