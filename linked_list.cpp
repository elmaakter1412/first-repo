#include<bits/stdc++.h>
using namespace std;
class node{
public:
      int data;
      node * next;

};
class Linkedlist{
public:
    node * head;
    int sz;
    Linkedlist(){
        head = NULL;
        sz = 0;
    }
    // creats a new node with data = value and nxt = NULL

    node* creatNewNode(int value){
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    //Insert new value at head
    void InsertAthead(int value){
        sz++;
        node *a = creatNewNode(value);
            if(head == NULL){
                head = a;
                return;
            }
            //if head is not NULL
            a->next = head;
            head = a;
        

    }
    // prints the linked list
    void Traverse(){
        node* a = head;
        while(a != NULL){
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }
    //Search for  a single value
    int searchDistinctValue(int value){
        node* a = head;
        int index = 0;
        while(a != NULL){
            if(a->data == value){
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;

    }
    //search all possible occurrence
    void SearchAllValue (int value){
        node* a = head;
        int index = 0;
        while(a != NULL){
            if(a->data == value){
            cout<<value<<" is found at index "<<index<<endl;
        }
        a = a->next;
        index++;
        }
    }
    int getsize(){
        //O(1)
        return sz;

        
        //O(size of linked list) = O(n)
        //int sz = 0;
       // node* a = head;
       // while(a != NULL){
           // sz++;
           // a = a->next;
       // }
       // return sz;
    }

    void InsertAtAnyIndex(int index, int value){
        if(index == 0){
            InsertAthead(value);
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(cur_index != index-1){
            a = a->next;
            cur_index++;
        }
        

    }
};
int main(){

    Linkedlist l;

    //l.Traverse();
    cout<<l.getsize()<<endl;

    l.InsertAthead(10);
    cout<<l.getsize()<<endl;
    //l.Traverse();

    l.InsertAthead(5);
    cout<<l.getsize()<<endl;
    //l.Traverse();

    l.InsertAthead(20);
    //l.Traverse();
    cout<<l.getsize()<<endl;
    return 0;
}