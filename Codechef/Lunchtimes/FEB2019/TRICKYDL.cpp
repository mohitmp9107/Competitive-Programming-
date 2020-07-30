#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll a,s=0,cnt=0,p=0;
        cin >> a;
        ll maX=a-1;
        for(int i=1;;i++)
        {
            s+=pow(2,i-1);
            if((a*i)-s>0)
            {
                cnt++;
            }
            if ((a*i)-s>maX){
                maX=(a*i)-s; p=i;
            }
            if((a*i)-s<=0)
            {
                break;
            }
        }
        cout << cnt<< " "<< p<<endl;
    }
    return 0;
}
