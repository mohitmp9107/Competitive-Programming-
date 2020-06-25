#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll n=s.size();
        ll c[n];
        for(int i=0;i<n;i++){
            c[i]=s[i]-48;
        }
            for(int i=0;i<n;){
                if(c[i]==-1) {
                    i++;
                    continue;
                }
                if(c[i]==1){
                    c[i]=-1;
                    if(i>0 and c[i-1]!=-1)   c[i-1]^=1;

                    if(i<n-1 and c[i+1]!=-1)   c[i+1]^=1;
                    if(c[i-1]==1)    i--;
                    else i++;
                }
                if(c[i]==0) i++;
            }

        ll cnt=0;
        for(int i=0;i<n;i++){
            if(c[i]==-1) cnt++;
        }
        if(cnt==n){
            cout << "WIN" << endl;
        }else{
            cout << "LOSE" << endl;
        }
    }




}

