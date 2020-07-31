#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n,m,q; cin >> n >> m >>q;
        int row[n]={0}, col[m]={0};
        int x,y;
        for(int i=0;i<q;i++){
            cin >> x >> y ;
           row[x-1]++; col[y-1]++;
        }
        ll odd=0,even=0, ans=0;
        for(int i=0;i<m;i++){
            if(col[i]&1){
                odd++;
            }else even++;
        }
        // cout << odd << " " << even << endl;
        for(int i=0;i<n;i++){
            if(row[i]&1){
                ans+=even;
            }else{
                ans+= odd;
            }
        }
        cout << ans << endl;
    }
}
