#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// count no of unique triplets whose xor is 0
int countTriplets(ll a[], ll n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    int count = 0;

    // traverse for all i, j pairs such that j>i
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

          // xor of a[i] and a[j]
          int xr = a[i] ^ a[j];

          // if xr of two numbers is present,
          // then increase the count
          if (s.find(xr) != s.end() and xr != a[i] and xr != a[j])
            count++;
        }
    }
    // cout << count << endl;
    return count / 3;
}

int main()
{
    ll n ; cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cout << countTriplets(a, n);
    return 0;
}
