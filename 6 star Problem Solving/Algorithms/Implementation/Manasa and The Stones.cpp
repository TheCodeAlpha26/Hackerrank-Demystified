#include <bits/stdc++.h>
using namespace std;
vector<int> stones(int n, int a, int b) 
{
    vector<int> v;
    if(a==b)
     {
         v.push_back((n-1)*a);
        return(v); 
     }
    int x=max(a,b),y=min(a,b);
      for(int i=0;i<n;i++)
        v.push_back(y*(n-1-i)+(x*i));
    return(v);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,a,b;
    cin >> t;
    for (int i=0;i<t;i++) {
        cin >>n>>a>>b;
        vector<int> result = stones(n, a, b);
        for (int i = 0; i < result.size(); i++) 
            cout<< result[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
