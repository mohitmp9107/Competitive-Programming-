#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
bool power(int a , int n, int p)
{
    int res=1; a=a%p;
    while(n>0)
    {
        if(n&1) res=(res*a)%p;
        n>>=1;
        a=(a*a)%p;
    }
    return res;
}
bool IsPrime(int n, int k)
{
    if(n==2 or n==3) return true;
    if(n<=1 or n==4) return false;
    while(k--){
        int a= 2+ rand()%(n-4);
        if(__gcd(n,a)!=1) return false;
        if(power(a,n-1,n)!=1) return false;

    }
    return true;
}
bool isPrime2(ll a)
{
    if(a<2) return false;
    if(a==2) return true;
    if(a%2==0) return false;
    for(ll i=3;i<=sqrt(a);i+=2){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    //complexity o(k*log(n))
    //This is probabilistic method
    //higher the value of k higher the chances of answer's correctness
    //This is based on Fermat's Little Theorm a^(n-1)% mod n=1 must hold for n to be prime
    // a belongs to range [2,n-2]
    int n,k; cin >> n >> k;
    cout << IsPrime(n,k) << endl;

    // second function for checking prime no.
    cout << isPrime2(n) << endl;
}
