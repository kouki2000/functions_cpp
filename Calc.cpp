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

int Calc::cumulative_sum(int N, int K, int *a)
{
    if (N == 0)
    {
        return 0;
    }

    int ans = -1001001001;
    vector<int> s(N + 1, 0);

    for (int i = 0; i < N; ++i)
    {
        s[i + 1] = s[i] + a[i];
    }

    for (int i = 0; i <= N - K; ++i)
    {
        int val = s[i + K] - s[i];
        ans = max(ans, val);
    }
    return ans;
}