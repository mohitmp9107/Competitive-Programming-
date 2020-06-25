#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin>> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i]=a[i]*20;
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            b[i]=b[i]*10;
        }
        ll val,ans=0;
        for(int i=0;i<n;i++){
            val=a[i]-b[i];
            if(val<0) val=0;
            ans=max(ans,val);
        }
        cout << ans << endl;
    }
}

