#include <bits/stdc++.h>
#include "Sort.h"
using namespace std;

void Sort::bubble(int *a, int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}