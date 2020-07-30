#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long
bool f(int x,int y)
{
    return (x>y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        int n,b,cnt=0; vector<int> v;
        cin >> n >> b;
        int w[n],h[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin >> w[i]>>h[i]>>p[i];
            if(p[i]<=b)
            {
                v.push_back(w[i]*h[i]); cnt++;
            }
        }
        sort(v.begin(),v.end(),f);
        if(cnt>0)
            cout << v[0] << endl;
        else if(cnt==0)
            cout <<"no tablet" << endl;
    }
    return 0;


}
