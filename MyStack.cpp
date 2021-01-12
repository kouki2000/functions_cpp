#include <bits/stdc++.h>
#include <stack>
#include "MyStack.h"
using namespace std;

// push:挿入  pop:削除  top:上の要素

std::stack<int> MyStack::stack_func(char str, std::stack<int> st)
{
    int b = st.top();
    st.pop();
    int a = st.top();
    st.pop();
    if (str == '+')
    {
        st.push(a + b);
        return st;
    }
    else if (str == '-')
    {
        st.push(a - b);
        return st;
    }
    else if (str == '*')
    {
        st.push(a * b);
        return st;
    }
    else if (str == '/')
    {
        st.push(a / b);
        return st;
    }
}

// ** 使用方法 **
// string str = "12+34-*";
// stack<int> stc;

// rep(i, str.size())
// {
//     if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
//     {

//         stc = St.stack_func(str[i], stc);
//     }
//     else
//     {
//         int n = str[i] - '0';
//         stc.push(n);
//     }
// }
// cout << stc.top() << endl;