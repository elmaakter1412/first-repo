#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node* left;
    node* right;
    node* parent;

};

class Binary_tree{
public:
    node* root;

    
    Binary_tree(){
        root = NULL;
    }

    node* CreatNewNode(int id){
        node* newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    
    void Insertion(int id){
        node* newnode = CreatNewNode(id);
        if(root == NULL){
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty()){
            node* a = q.front();
            q.pop();
            
            if(a->left != NULL){
                q.push(a->left);
            }
            else{
                //Insert in left child of node a
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->right != NULL){
                q.push(a->right);
            }
            else{
                //Insert in the right child of node a
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }

    }
    void BFS(){
        if(root == NULL){
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty()){
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if(a->left != NULL){
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != NULL){
                r = a->right->id;
                q.push(a->right);
            }
            if(a->parent != NULL){
                p = a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left child = "<<l;
            cout<<" Right child = "<<r<<" Parent id = "<<p<<endl;

        }
    }

    void DFS(node* a){
        if(a == NULL){
            return;
        }
        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(node* a){
        if(a == NULL){
            return;
        }
        cout<<a->id<<" ";
        Inorder(a->left);
        Inorder(a->right);
    }

    void Preorder(node* a){
        if(a == NULL){
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->left);
        Preorder(a->right);
    }

    void Postorder(node* a){
        if(a == NULL){
            return;
        }
        Postorder(a->left);
        Postorder(a->right);
        cout<<a->id<<" ";
    }
    
    
};

int main(){
    Binary_tree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();
    return 0;
}