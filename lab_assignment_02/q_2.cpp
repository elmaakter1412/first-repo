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

    Stack(){
        head = NULL;
    }

    void push(T data){
        node<T> *temp = new node<T>;
        temp->data = data;
        temp->nxt = head;
        head = temp;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack is empty\n";
        }
        T popped = head->data;
        node<T> *temp = head;
        head = head->nxt;
        delete temp;
        
    }

    T top(){
        if(head == NULL){
            cout<<"Stack is empty\n";
        }
        return head->data;
    }


};
int main(){
    Stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}