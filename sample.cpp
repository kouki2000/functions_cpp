#include <bits/stdc++.h>
#include "Calc.h"
#include "Sort.h"
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    Calc cl;
    Sort st;
    int n;
    cin >> n;
    double x[n], y[n];
    double ans = 0;
    rep(i, n)
    {
        cin >> x[i] >> y[i];
    }
    cout << cl.Min_distance(x, y, n) << endl;
    return 0;
}