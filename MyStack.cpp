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

int MyStack::queue_int(queue<int> que, int time, int limit)
{
    int T = time;
    while (!que.empty())
    {
        if (que.front() <= limit)
        {
            T += que.front();
            cout << "time: " << T << endl;
            que.pop();
        }
        else
        {
            int temp = que.front();
            T += limit;
            que.pop();
            que.push(temp - limit);
        }
    }
    return T;
}

// キュー:サンプル用
// queue<string> name;
// queue<int> time;
// int n = 5;
// int q = 100;

// name.push("p1");
// name.push("p2");
// name.push("p3");
// name.push("p4");
// name.push("p5");

// time.push(150);
// time.push(80);
// time.push(200);
// time.push(350);
// time.push(20);

// int T = 0;