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
<<<<<<< HEAD
    vector<int> ans = cl.enum_divisors(120);
    rep(i, ans.size())
    {
        cout << ans[i] << endl;
    }
=======
    // int a[] = {1, 3, 2};
    // cout << cl.is_prime(11) << endl;
    // cout << cl.combination(7, 3) << endl;
    // st.bubble(a, 3);
    // rep(i, 3)
    // {
    //     cout << a[i] << endl;
    // }
    // st.bit(3);
    int a[] = {2, 5, -4, 10, 3};
    cout << cl.cumulative_sum(5, 1, a) << endl;

>>>>>>> cumulative_sum
    return 0;
}