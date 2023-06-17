#include <bits/stdc++.h>
using namespace std;


int precision(char c)
{
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


int main()
{
    stack<char> st;
    string in_fix,post_fix;
    cin >> in_fix;


    for (char ch:in_fix)
    {
        if ((ch >= 'a' && ch <= 'z'))
            post_fix += ch;


        else if (ch == '(')
            st.push(ch);


        else if (ch == ')')
        {


            while (!st.empty() && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                post_fix += c;
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && precision(ch) <= precision(st.top()))
            {
                char c = st.top();
                st.pop();
                post_fix += c;
            }
            st.push(ch);
        }
    }
    while (!st.empty())
    {
        char c = st.top();
        st.pop();
        post_fix += c;
    }
    cout << post_fix << endl;
    return 0;
}