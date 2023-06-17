#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *nxt;
};

class LinkedList{
private:
    int sz = 0;

public:
    node *head;
    node *hd;

    LinkedList(){
        head = NULL;
    }

    // this create a new node with data = value and nxt = NULL
    node* createNewNode(int value){
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        sz++;
        return newNode;
    }

    void InsertAtHead(int value){
        node *a = createNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void Traverse(){
        node *a = head;
        while(a!=NULL){
            cout << a->data<<" ";
            a = a->nxt;
        }
        cout << "\n";
    }


    int searchOne(int value){
        node *a = head;
        int index = 0;
        while(a!=NULL){
            if(a->data == value)
                return index;
            a = a->nxt;
            index++;
        }
        return -1;
    }

    int getSize(){
        return sz;
    }

    int getValue(int index){
        if(index>=sz){
            return -1;
        }
        node *a = head;
        int in = 0;
        while(a!=NULL){
            if(in == index)
                return a->data;
            a = a->nxt;
            in++;
        }
        return -1;
    }

    void printReverse(node* a){
        if (a == NULL) return;
        printReverse(a->nxt);
        cout << a->data << " ";
        if(a==head)
            cout << "\n";
    }

    node* getHead(){
        node *hd = head;
        return hd;
    }

    void swapFirst(){
        if(sz<2){
            return;
        }
        node* a = head->nxt;
        head->nxt = a->nxt;
        a->nxt = head;
        head = a;
    }
};

int main(){
    
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse(l.getHead());
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse(l.getHead());

   
    return 0;
}