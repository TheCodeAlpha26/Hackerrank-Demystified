#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> v, int k) 
{
   int i=0,s=100,n=v.size();
    while(i!=n-k)
                s-=(1+2*v[(i+k)%n]),i=(i+k)%n;
   return(s-1-2*v[0]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) 
        cin>>c[i];
    int result = jumpingOnClouds(c, k);
    cout << result << "\n";
    return 0;
}
