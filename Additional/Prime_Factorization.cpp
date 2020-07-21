#prime fact
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
vector<long long> v;
ll primefactorization(ll a ){

    while(a%2==0){
        cout << 2 << endl;
        a/=2;
    }
    // cout << a << endl;
    for(ll i=3;i<=sqrt(a);i+=2){
        while(a%i==0){
            cout << i << endl;
            a/=i;
        }

    }
    if(a>2)
        cout << a <<endl;
}
int main()
{
    ll a;   cin >> a;
    cout << primefactorization(a) << endl ;
}
