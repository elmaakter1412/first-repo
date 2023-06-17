#include<bits/stdc++.h>
using namespace std;
template<class T>




class node{
public:
    T data;
    node * nxt;
    node * prv;
};


template<class T>
class DoublyLinkedList{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }


    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }




   
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }




    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if(b!=NULL){
            b->prv = NULL;
        }
        head = b;
        sz--;
    }




   
    int getSize(){
        return sz;
    }
};




template<class T>
class Stack{
    public:
    DoublyLinkedList<T> dl;
    Stack(){};
    T TOP(){
        if (dl.getSize() == 0){
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }




    void PUSH(T val){
        dl.InsertAtHead(val);
    }




    void POP(){
        if (dl.getSize() == 0){
            cout << "Stack is empty!\n";
            return;
        }
        dl.deleteAtHead();
    }




    int getSz(){
        return dl.getSize();
    }
};




int main(){
    Stack<int> a;
    a.PUSH(9);
    a.PUSH(3);
    a.PUSH(2);
    a.PUSH(6);
   
    cout << a.TOP()<<"\n";
    a.POP();
    cout << a.TOP()<<"\n";
    return 0;
}