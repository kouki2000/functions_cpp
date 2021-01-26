#include <bits/stdc++.h>
using namespace std;
class Calc
{
public:
    int is_prime(int x);
    int permutation(int left, int right);
    int combination(int left, int right);
    int cumulative_sum(int n, int k, int *a);
    int gcd(int x, int y);
    int MaximumProfit(int *array, int num);
    long long exponentiatoin(long long val, long long cnt);
    double Min_distance(double *x, double *y, int n);
    vector<int> enum_divisors(int num);
};