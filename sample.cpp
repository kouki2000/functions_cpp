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
    vector<int> ans = cl.enum_divisors(120);
    rep(i, ans.size())
    {
        cout << ans[i] << endl;
    }
    return 0;
}