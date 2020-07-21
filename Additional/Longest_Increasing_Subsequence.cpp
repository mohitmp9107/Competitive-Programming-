#include<bits/stdc++.h>
using namespace std;
int lis(int a[],int n ){
     int output[n]; output[0]=1;
    for(int i=1;i<n;i++){
        output[i]=1;
      for(int j=i-1;j>=0;j--){

        if(a[j]>a[i]) continue;
        int possibleAns=output[j]+1;
        output[i]=max(possibleAns,output[i]);
      }
    }
    int best=*max_element(output,output+n);
    return best;
}
int main()
{
     int n; cin >> n; int a[n];
     for(int i=0;i<n;i++) cin >> a[i];
     cout << lis(a,n)<< endl;
     return 0;
}
