#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int value;
    node* Left;
    node* Right;
};

class BST{
public:
    node *root;
    BST() {
        root = NULL;
    }
    void Insert(int value) {
        node* newNode = new node;
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        if (root == NULL) {
            root = newNode;
            return;
        }
        node* current = root;
        node* parent = NULL;
        while (true) {
            parent = current;
            if (value < current->value) {
                current = current->Left;
                if (current == NULL) {
                    parent->Left = newNode;
                    return;
                }
            }
             else {
                current = current->Right;
                if (current == NULL) {
                    parent->Right = newNode;
                    return;
                }
            }
        }
    }
    bool Search(int value) {
        if (root == NULL) {
            return false;
        }
        node* current = root;
        while (current != NULL) {
            if (value == current->value) {
                return true;
            } else if (value < current->value) {
                current = current->Left;
            } else {
                current = current->Right;
            }
        }
        return false;
    }
};

int main() {
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;
}
