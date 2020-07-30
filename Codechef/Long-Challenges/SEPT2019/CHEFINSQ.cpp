#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binomialCoeff(ll n, ll k)
{
    ll C[k+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}
int main()
{
    int t; cin >> t;
    while(t--){
        int k,n; cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ll l1=0,l2=0;
        sort(a,a+n);
        int p= a[k-1];
        int i=k-1;
        while(a[i-1]==p){
            l2++; i--;
        }
        i=k-1;
        while(a[i+1]==p){
             l1++; i++;
        }
        ll N= l1+l2+1;
        ll r= l2+1;
        cout << binomialCoeff(N,r) << endl;
         // cout << l1 << " " << l2 << endl;
    }

}
