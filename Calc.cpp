#include <bits/stdc++.h>
#include "Calc.h"
using namespace std;

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