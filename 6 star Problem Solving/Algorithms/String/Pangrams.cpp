#include <bits/stdc++.h>
using namespace std;
string pangrams(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<int> v(26,0);
    for(int i =0;i<s.size();i++)
           if(s[i]!=' ')
             v[s[i]-'a']++;
    for(int i=0;i<26;i++)
       if(v[i]<1)
         return("not pangram");
    return("pangram");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    cout << pangrams(s) << "\n";
    return 0;
}
