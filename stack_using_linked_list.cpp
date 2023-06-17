#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

};

class DoublyLinklist{
public:
    node* head;
    int sz;
    DoublyLinklist(){
        head = NULL;
        sz = 0;
    }

    //creates a new node with given data and returns it
    node* CreateNewNode(int data){
        node* newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }
    // Insert a node with given data at head
    void InsertAthead(int data){
        sz++;
        node* newnode = CreateNewNode(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        node* a = head;
        newnode->next = a;
        a->prev = newnode;
        head = newnode;

    }
    //insert the given data at the given index
    void Insert(int index, int data){
        if(index == 0){
            InsertAthead(data);
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(a != cur_index-1){
            a = a->next;
            cur_index++;
        }
        //a = cur_index - 1
        node* newnode = CreateNewNode(data);


    }

    void Traverse(){
        node* a = head;
        while(a != NULL){
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

    int getsize(){
        return sz;
    }

};

int main(){
    DoublyLinklist dl;
    dl.InsertAthead(10);
    dl.InsertAthead(5);
    dl.InsertAthead(1);

    dl.Traverse();
    cout<<dl.getsize()<<endl;
    return 0;
}