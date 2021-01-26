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
    int array[] = {5, 6, 4, 2, 1, 3};
    st.SelectionSort(array, 6);
    rep(i, 6)
    {
        cout << array[i] << endl;
    }
    return 0;
}