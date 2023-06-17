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
    node* allnode[6];

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
    void build_binary_tree(){
    node* allnode[6];
        for(int i=0; i<6; i++){
            allnode[i] = CreatNewNode(i);

          allnode[0]->left = allnode[1];
          allnode[0]->right = allnode[2];

          allnode[1]->left = allnode[5];
          allnode[1]->parent = allnode[0];

          allnode[2]->left = allnode[3];
          allnode[2]->right = allnode[4];
          allnode[2]->parent = allnode[0];

          allnode[5]->parent = allnode[1];

          allnode[3]->parent = allnode[2];
          allnode[4]->parent = allnode[2];
          root = allnode[0];
        }
    }
    void print_tree_info(){
        for(int i=0; i<6; i++){
            int p = -1;
            int l = -1;
            int r = -1;
            if(allnode[i]->parent != NULL){
                p = allnode[i]->parent->id;
            }
            if(allnode[i]->left != NULL){
                l = allnode[i]->left->id;
            }
            if(allnode[i]->right != NULL){
                r = allnode[i]->right->id;
            }
            cout<<"Node "<<i<<": parent = "<<p<<" ,left child = "<<l<<" , right child = "<<r<<endl;
        }
    }
};

int main(){
    Binary_tree bt;
    bt.build_binary_tree();
    bt.print_tree_info();
    return 0;
}