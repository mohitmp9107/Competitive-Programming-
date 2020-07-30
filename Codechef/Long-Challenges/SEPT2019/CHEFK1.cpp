#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t; cin >> t;

    while(t--){
        ll n,m; cin >> n >> m;

        if(m<(n-1) or m>(n*(n+1))/2){
            cout << -1 << endl;
            continue;
        }
         if(n==1 and m==0){
            cout << 0 << endl;
            continue;
        }
        if(n==1 and m==1){
            cout << 1 << endl;
            continue;
        }
        if(n==2 and m==1){
            cout << 1 << endl ;
            continue;
        }
        if(m<=n+1){
            cout << 2 << endl;
            continue;
        }
        if(m<=2*n){
            cout << 3 << endl;
            continue;
        }

        ll ans=3, f=0;
        m-=2*n;
        if(n%2!=0){
            while(m>0 ){
                if(f==0){
                    m-=((n/2));
                }
                if(f==1){
                     m-=((n/2)+1);
                }
                ans++;
                f^=1;

            }
            cout <<  ans << endl;
            continue;
        }
        while(m>0 ){
            m-=((n/2));
            ans++;
        }
       cout <<  ans << endl;

    }
}
