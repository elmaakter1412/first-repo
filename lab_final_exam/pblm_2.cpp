#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int value;
	Node* nxt;
	Node* prv;
};

class LinkedList{
public:
	Node* head;
	Node* tail;
    int sz;
    LinkedList()
	{
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    Node* createNewNode(int value){
        Node *newNode = new Node;
        newNode->value = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
	void insertHead(int value)
	{
        Node *a = createNewNode(value);
        if(head==NULL){
            head = a;
            tail = a;
            sz++;
            return;
        }
        a->nxt = head;
        head->prv = a;
        head = a;
        sz++;
    }
	void insertTail(int value)
	{
		Node *a = createNewNode(value);
        if(tail==NULL){
            head = a;
            tail = a;
            sz++;
            return;
        }
        a->prv = tail;
        tail->nxt = a;
        tail = a;
        sz++;
	}
	void insertMid(int value)
	{
        int index = sz / 2;
        if(index == 0){
            insertHead(value);
            return;
        }
        Node *a = head;
        int c_i = 0;
        while(c_i != (index-1)){
            a = a->nxt;
            c_i++;
        }
        Node *b = a->nxt;
        Node *newNode = createNewNode(value);
        newNode->nxt = b;
        newNode->prv = a;
        a->nxt = newNode;
        b->prv = newNode;
	}
	void print()
	{
		Node *a = head;
        Node *b = head;
        cout << "Forward -> ";
        while(a!=NULL){
            cout << a->value << " ";
            if(a->nxt == NULL){
                b = a;
            }
            a = a->nxt;
        }
        cout << "\n";
	}
	void Merge(LinkedList a)
	{
        tail->nxt = a.head;
        a.head->prv = tail;
        tail = a.tail;
    }
    int getSize(){
        return sz;
    }
};
int main(){
	LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
    a.insertHead(0);
	a.insertTail(10);
	a.print();
	
	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print();

    a.Merge(b);
	a.print();
	b.print();
}