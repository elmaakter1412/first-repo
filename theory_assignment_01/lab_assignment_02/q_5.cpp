#include<bits/stdc++.h>
using namespace std;

template<class T>

class node{
    public:
        T data;
        node* prev;
        node* nxt;

};
template<class T>
class Deque{
    public:
        node<T> *head;
        node<T> *tail;
        int sz;

        Deque(){
            head = NULL;
            tail = NULL;
            sz = 0;
        }

        node<T>* CREatNewNode(T value){
            node<T>* newnode = new node<T>;
            newnode->data = value;
            newnode->nxt = NULL;
            newnode->prev = NULL;
            return newnode;
        }

        //push_back O(1)
        void push_back(int value){
            node<T>* newnode = CREatNewNode(value);
            if(sz == 0){
                head = newnode;
                tail = newnode;
                sz++;
                return;
            }
            tail->nxt = newnode;
            newnode->prev = tail;
            tail = newnode;
            sz++;
        }

        //push_front O(1)
        void push_front(int value){
            node<T>* newnode = CREatNewNode(value);
            if(sz == 0){
                head = newnode;
                tail = newnode;
                sz++;
                return;
            }
            head->prev = newnode;
            newnode->nxt = head;
            head = newnode;
            sz++;
        }

        //pop_back O(1)
        void pop_back(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return;
            }
            if(sz == 1){
                delete tail;
                head = NULL;
                tail = NULL;
                sz--;
                return;
            }
            node<T>* a = tail;
            tail = tail->prev;
            delete a;
            tail->nxt = NULL;
            sz--;
        }

        //pop_front O(1)
        void pop_front(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return;
            }
            if(sz == 1){
                delete tail;
                head = NULL;
                tail = NULL;
                sz--;
                return;
            }

            node<T>* a = head;
            head = head->nxt;
            delete a;
            head->prev = NULL;
            sz--;

        }
        //front O(1)
        T front(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return -1;
            }
            return head->data;
        }
        // back O(1)
        T back(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return -1;
            }
            return tail->data;
        }

};
int main(){
    Deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;


    return 0;

}