#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        ll a[n],b1[n],b2[n],b0[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }

        if(k<=n){
            for(ll i=0;i<k;i++){
                ll p=i%n;ll q=n-p-1;
                ll aa= a[p];  ll bb= a[q];
                b1[p] = aa^bb;  a[p] =b1[p];
            }ll i;
            for(i=0;i<k;i++){
                cout << b1[i] << " ";
            }for( ;i<n;i++){
                cout << a[i] << " ";
            } cout << endl; continue;
        }else{
            for(int i=0;i<n;i++){
                ll p=i%n;ll q=n-p-1;
                ll aa= a[p];  ll bb= a[q];
                    b1[p] = aa^bb;  a[p] =b1[p];
                }
                for(int i=0;i<n;i++){
                    ll p=i%n;ll q=n-p-1;
                    ll aa= a[p];  ll bb= a[q];
                    b2[p] = aa^bb;  a[p] =b2[p];
                }
                for(int i=0;i<n;i++){
                    ll p=i%n;ll q=n-p-1;
                    ll aa= a[p];  ll bb= a[q];
                    b0[p] = aa^bb;  a[p] =b0[p];
                }

                ll pass = (k/n)%3 , val= k%n;

                if(pass==1){
                    int i;
                    for( i=0;i<val;i++){
                        cout << b2[i] << " ";
                    }
                    for(;i<n;i++){
                        cout <<b1[i] << " ";
                    }
                    cout << endl; continue;
                }
                if(pass==2){
                    int i;
                    for( i=0;i<val;i++){
                        cout << b0[i] << " ";
                    }
                    for(;i<n;i++){
                        cout <<b2[i] << " ";
                    }
                    cout << endl; continue;
                }
                if(pass==0){
                    int i;
                    for( i=0;i<val;i++){
                        cout << b1[i] << " ";
                    }
                    for(;i<n;i++){
                        cout <<b0[i] << " ";
                    }
                    cout << endl; continue;
                }
            }
        }
}
