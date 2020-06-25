#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k ; cin >> n >> k;

        ll val=(n/k);
        if(val%k==0){
            cout <<"NO" << endl;
        }
        else
            cout << "YES" << endl;


    }
}

