#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,v;
        cin >> n >> k >> v;
        int a[n],q=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i]; q+=a[i];
        }
        int p=(n+k)*v;
        if((p-q)>=3&&(p-q)%k==0)
        {
            cout << (p-q)/k<< endl;
        }
        else
            cout << "-1"<<endl;
    }
    return 0;
}
