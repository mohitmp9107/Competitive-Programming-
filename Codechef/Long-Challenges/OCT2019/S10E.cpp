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
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
            ll ans=1;
        int f=0;
        if(a[0]>a[1]){
            ans++;
        }
        if(a[1]>a[2] and a[0]>a[2]){
            ans++;
        }
        if(a[0]>a[3] and a[1]>a[3] and  a[2]>a[3]){
            ans++;
        }
        if(a[0]>a[4] and a[1]>a[4] and  a[2]>a[4] and a[3]>a[4]){
            ans++;
        }
        for(int i=5;i<n;i++){
            int j=i-1; int cnt=0;
            while(cnt<5 and j>=0){
                if(a[j]>a[i]){
                    cnt++;
                }else{
                    break;
                }
                j--;
            }
            if(cnt==5){
                ans++;
            }
        }
        cout << ans <<endl;
    }
}
