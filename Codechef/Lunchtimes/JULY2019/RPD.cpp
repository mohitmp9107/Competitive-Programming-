#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(n==2){
            ll sum=0;
            ll p=a[0]*a[1];
            while(p>0){
                sum+=p%10;
                p/=10;
            }
            cout << sum << endl;
            continue;
        }
        vector<ll> v(n*n,1);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                v.push_back(a[i]*a[j]);

            }
        }
        vector<ll> ans(n);
        for(int i=0;i<v.size();i++){
            ll sum=0;
            while(v[i]>0){
                sum+=v[i]%10;
                v[i]=v[i]/10;
            }
            ans.push_back(sum);
        }
        cout << *max_element(ans.begin(),ans.end()) << endl;
    }
}
