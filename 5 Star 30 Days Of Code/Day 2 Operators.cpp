#include <bits/stdc++.h>
using namespace std;
void solve(double mc, int tp, int tx) {
       double t=0.01*mc*(100+tx+tp);
       printf("%.0f",t);           //.0f to set precision (to nearest integer)
}
int main()
{
    double meal_cost;
    cin >> meal_cost;
    int tip_percent,tp;
    cin >> tip_percent>>tp;
    solve(meal_cost, tip_percent, tp);
    return 0;
}
