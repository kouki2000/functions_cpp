#include <bits/stdc++.h>
using namespace std;
class Calc
{
public:
    int is_prime(int x);
    int permutation(int left, int right);
    int combination(int left, int right);
    int cumulative_sum(int n, int k, int *a);
    long long exponentiatoin(long long val, long long cnt);
    vector<int> enum_divisors(int num);
};