#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n),c(101);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        c[a[i]]++;
    }
    int x=*max_element(c.begin(),c.end());
    cout<<n-x;
    return 0;
}
