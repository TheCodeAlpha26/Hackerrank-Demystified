#include <bits/stdc++.h>
using namespace std;
int stringConstruction(string s) 
{
       int c=0;
       vector<int> v(26,0);
       for(int i=0;i<s.size();i++)
          v[s[i]-'a']++;
       for(int i=0;i<26;i++)
          if(v[i]>0)
            c++;     
        return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) 
    {
        string s;
        cin>>s;
        cout <<stringConstruction(s)<< "\n";
    }
    return 0;
}
