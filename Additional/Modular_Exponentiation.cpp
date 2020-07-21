#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// simple power function
ll pow(int x, int n)
{
    if(n==0){
        return 1;
    }
    if(n&1){ // Power is odd
        ll val=pow(x,n/2);
        return val*val*x;
    }else{ // Power is even
        ll val=pow(x,n/2);
        return val*val;
    }
}
// Modular Exponentian Recursively
int  modExp(int a, int b, int c)
{
    if(!b) return 1;
    ll ans;
    if(b&1){
        ll  val=modExp(a,b/2,c);
        ans=((val%c)*(val%c)*(a%c))%c;
    }else{
        ll  val=modExp(a,b/2,c);
         ans=(val%c)*(val%c)%c;

    }
    return (int)(ans+c)%c;
}
// Modular Exponentiation Iteratively
ll ModExp(ll a,ll b,ll c)
{
    a=a%c;
    ll ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%c;
        }
        b=b>>1; a=(a*a)%c;
    }
    return ans;
}
int main()
{

    int a,b, c; cin >> a >> b >> c;
    cout << ModExp(a,b,c)<< endl;
}
