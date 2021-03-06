#include <bits/stdc++.h>                  //HASHING BASED SOLUTION
using namespace std;
vector<int> missingNumbers(vector<int> a, vector<int> b) 
{
    vector<int> v;
    map<int,int> x,y;
    for(int i=0;i<a.size();i++)
       if(x.find(a[i])!=x.end()) 
         x[a[i]]++;
        else
          x.insert({a[i],1});
    for(int i=0;i<b.size();i++)
       if(y.find(b[i])!=y.end()) 
         y[b[i]]++;
        else
          y.insert({b[i],1});
    map<int,int>::iterator i;
    for(i=y.begin();i!=y.end();i++)
       if(x.find(i->first)==x.end()) 
         v.push_back(i->first);
        else if(x[i->first]!=y[i->first])
          v.push_back(i->first);
    return(v);         
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int m;
        cin>>m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
      cin>>b[i];
    vector<int> result = missingNumbers(a,b);
    for (int i = 0; i < result.size(); i++) 
        cout << result[i]<<" ";
    return 0;
}

/*/////////WITHOUT HASHING
#include <bits/stdc++.h>   
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),v(200000,0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        v[a[i]]++;
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        v[b[i]]--;
    }
    int x=*min_element(b.begin(),b.end()),y=*max_element(b.begin(),b.end());
    for(int i=x;i<=y;i++)
        if(v[i]!=0)
        cout<<i<<" ";
    return 0;
}
*/
