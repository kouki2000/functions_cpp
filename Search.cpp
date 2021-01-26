#include <bits/stdc++.h>
#include "Search.h"
using namespace std;

int Search::binary_search(int key, int *array, int num)
{
    // 配列の左端と右端
    int left = 0, right = num - 1;
    while (right >= left)
    {
        // 区間の真ん中
        int mid = left + (right - left) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            right = mid - 1;
        }
        else if (array[mid] < key)
        {
            left = mid + 1;
        }
    }
    return -1;
}