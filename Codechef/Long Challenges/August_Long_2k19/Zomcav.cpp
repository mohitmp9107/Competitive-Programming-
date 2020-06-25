#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void add(ll arr[], ll N, ll lo, ll hi, ll val)
{
    arr[lo] += val;
    if (hi != N - 1)
       arr[hi + 1] -= val;
}
void updateArray(ll arr[], ll N)
{
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}
bool areEqual(ll arr1[], ll arr2[], ll n, ll m)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;
    for (int i = 0; i < n; i++) {
        if (mp.find(arr2[i]) == mp.end())
            return false;
        if (mp[arr2[i]] == 0)
            return false;

        mp[arr2[i]]--;
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int  t; cin >> t;
    while(t--){
            ll n;
            cin >> n;
            ll c[n],r[n],h[n];
            for(int i=0;i<n;i++){
                cin >> c[i];
            }
            for(int i=0;i<n;i++){
                cin >> h[i];
                r[i]=0;
            }
            ll low,high,k=0;
              for(int i=0;i<n;i++){
                low=i-c[i]; high=i+c[i];
                low=max(low,k);
                    high=min(high,n-1);
                    add(r,n,low,high,1);
            }
        updateArray(r,n);
        (areEqual(h,r,n,n))? cout << "YES" << endl : cout << "NO" << endl;



    }




}

