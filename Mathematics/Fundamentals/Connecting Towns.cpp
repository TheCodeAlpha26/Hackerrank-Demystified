#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
int connectingTowns(int n, vector<int> v) {
    long long int p=1;
    for(int i=0;i<n-1;i++)
       p=(p*v[i])%1234567;
    return(p);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> routes(n-1);
        for (int j = 0; j < n-1; j++)
            cin>>routes[j];
         int result = connectingTowns(n, routes);
         cout<< result<< "\n";
    }
    return 0;
}
