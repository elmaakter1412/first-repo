#include<bits/stdc++.h>
using namespace std;
int main(){
    //stack
    stack<int>st;

    //push O(1)
    st.push(10);
    st.push(20);
    st.push(30);

    //size O(1)
    cout<<"stack size : "<<st.size()<<endl;

    //top O(1)
    cout<<st.top()<<endl;

    //pop O(1)
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

        cout<<"stack size : "<<st.size()<<endl;

    
}