#include<bits/stdc++.h>
using namespace std;


template<class T>
class node{
public:
    T data;
    node *nxt;


};


template<class T>
class Stack{
public:
    node<T> *head;
    int sz;


    Stack(){
        head = NULL;
        sz = 0;
    }


    void push(T data){
        node<T> *temp = new node<T>;
        temp->data = data;
        temp->nxt = head;
        head = temp;
        sz++;
    }


    void pop(){
        if(head == NULL){
            cout<<"Stack is empty\n";
        }
        T popped = head->data;
        node<T> *temp = head;
        head = head->nxt;
        sz--;
        delete temp;

    }


    T top(){
        if(head == NULL){
            cout<<"Stack is empty\n";
            T z;
            return z;
        }
        return head->data;
    }

    int size(){
        return sz;
    }




};
int main(){
    Stack<char>st;
    st.push('s');
    st.push('J');
    st.push('b');
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;


    return 0;
}