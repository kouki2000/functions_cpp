#include <bits/stdc++.h>
#include "Calc.h"
using namespace std;

// 素数判定
int Calc::is_prime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

// 順列
int Calc::permutation(int left, int right)
{
    int ans = left;
    for (int i = 1; i < right; i++)
    {
        left--;
        ans *= left;
    }
    return ans;
}

// 組み合わせ
int Calc::combination(int left, int right)
{
    int ans = 1;
    int cnt = left;
    for (int i = 1; i <= right; i++)
    {
        ans *= cnt;
        ans /= i;
        cnt--;
    }
    return ans;
}

//約数列挙
vector<int> Calc::enum_divisors(int n)
{
    vector<int> ans;
    // 計算量が√nだからi*iにしてる
    for (int i = 1; i * i <= n; ++i)
    {
        // 約数の判定
        if (n % i == 0)
        {
            ans.push_back(i);
            // 約数の重複の確認
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    // ソート
    sort(ans.begin(), ans.end());
    return ans;
}

// 累乗
long long Calc::exponentiatoin(long long val, long long cnt)
{
    long long ans = val;
    for (int i = 0; i < cnt - 1; ++i)
    {
        ans *= val;
    }
    return ans;
}

//2点間の距離の最小値
double Calc::Min_distance(double *x, double *y, int n)
{
    double ans = 1001001001;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            ans = min(ans, sqrt(exponentiatoin(dx, 2) + exponentiatoin(dy, 2)));
        }
    }
    return ans;
}

// 最大公約数
int Calc::gcd(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return gcd(y, x % y);
    }
}

// 最大の利益
int Calc::MaximumProfit(int *array, int num)
{
    int ans = -1001001001;
    for (int i = 0; i < num; ++i)
    {
        for (int j = i + 1; j < num; ++j)
        {
            int cnt = array[j] - array[i];
            ans = max(ans, cnt);
        }
    }
    return ans;
}