#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  phi[n+2];
void eulerphi()
{

    for(int i=1;i<=n;i++){
        phi[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(phi[i]==i){
            phi[i]=i-1;
            for(int j=2*i;j<=n;j+=i){
                phi[j]=(phi[j]*(i-1))/i;
            }
        }
    }
}

int main()
{
    eulerphi(10);
    return 0;
}
