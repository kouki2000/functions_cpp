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

void Sort::bit(int num)
{
    for (int bit = 0; bit < (1 << num); bit++)
    {
        vector<int> s;
        for (int i = 0; i < num; i++)
        {
            if (bit & (1 << i))
            {
                s.push_back(i);
            }
        }

        cout << bit << ":{";
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << "}" << endl;
    }
}

void Sort::InsertionSort(int *array, int num)
{
    for (int i = 1; i <= num - 1; ++i)
    {
        // 未整列の配列から値を取得
        int val = array[i];

        // インデックス用の変数
        int cnt = i - 1;

        while (cnt >= 0 && array[cnt] > val)
        {
            array[cnt + 1] = array[cnt];
            cnt--;
        }
        array[cnt + 1] = val;
        for (int i = 0; i < num; ++i)
        {
            cout << array[i];
        }
        cout << endl;
    }
}