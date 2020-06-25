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
        int n,s,cnt=0;
        cin >> n; int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
            s=a[0];
        for(int i=0;i<n;i++)
        {

            if(cnt>=a[i])
            {
                cnt++; s+=(i+1);
            }
            //cout << cnt << endl;

        }
        cout << cnt << endl;
    }
    return 0;


}
