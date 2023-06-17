#include <bits/stdc++.h>
using namespace std;

int operations(char c, int n1, int n2){
    if(c == '+')
        return n1 + n2;
    else if(c == '-')
        return n1 - n2;
    else if(c == '*')
        return n1 * n2;
    else
        return n1 / n2;
}


int precision(char c){
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


string infix_to_postfix(string in_fix){
    stack<char> st;
    string post_fix = "";


    for (char ch:in_fix)
    {
        if ((ch >= '0' && ch <= '9'))
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
    return post_fix;
}


int evaluation(string in_fix){
    string post_fix = infix_to_postfix(in_fix);
    stack<int> num;
    for(char ch: post_fix){
        if (ch >= '0' && ch <= '9'){
            int x = ch - 48;
            num.push(x);
        }else{
            int n1 = num.top();
            num.pop();
            int n2 = num.top();
            num.pop();
            int x = operations(ch, n2, n1);
            num.push(x);
        }
    }
    return num.top();
}


int main()
{
    string s;
    cin >> s;
    int ans = evaluation(s);
    cout << ans << "\n";
    return 0;
}