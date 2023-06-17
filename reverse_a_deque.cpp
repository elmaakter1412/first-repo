#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* nxt;

};

class Deque{
    public:
        node* head;
        node* tail;
        int sz;
        int rev;

        Deque(){
            head = NULL;
            tail = NULL;
            sz = 0;
            rev = 0;
        }

        node* CREatNewNode(int value){
            node* newnode = new node;
            newnode->data = value;
            newnode->nxt = NULL;
            newnode->prev = NULL;
            return newnode;
        }
        void InserAtTail(int value){
            node* newnode = CREatNewNode(value);
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

        void InsertAtHead(int value){
            node* newnode = CREatNewNode(value);
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
        //push_back O(1)
        void push_back(int value){
            if(rev == 0){
                InserAtTail(value);
            }
            else{
                InsertAtHead(value);
            }
        }

        //push_front O(1)
        void push_front(int value){
            if(rev == 0){
                InsertAtHead(value);
            }
            else{
                InserAtTail(value);
            }
        }

        void DeleteLast(){
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
            node* a = tail;
            tail = tail->prev;
            delete a;
            tail->nxt = NULL;
            sz--;
        }

        void DeleteFirst(){
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

            node* a = head;
            head = head->nxt;
            delete a;
            head->prev = NULL;
            sz--;

        }

        //pop_back O(1)
        void pop_back(){
            if(rev == 0){
                DeleteLast();
            }
            else{
                DeleteFirst();
            }
        }

        //pop_front O(1)
        void pop_front(){
            if(rev == 0){
                DeleteFirst();
            }
            else{
                DeleteLast();
            }
        }
        //front O(1)
        int front(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return -1;
            }
            if(rev == 0){
            return head->data;
            }
            else{
                return tail->data;
            }
        }
        // back O(1)
        int back(){
            if(sz == 0){
                cout<<"Deque is empty\n";
                return -1;
            }
            if(rev == 0){
            return tail->data;
            }
            else{
                return head->data;
            }
        }
        // reverse operation O(1)
        void reverse_deque(){
            if(rev == 0){
                rev = 1;
            }
            else{
                rev = 0;
            }
        }

};
int main(){
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.push_front(20);
    d.reverse_deque();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<endl;


    return 0;

}