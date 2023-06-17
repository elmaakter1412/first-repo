#include <bits/stdc++.h>
using namespace std;
 
// Class describing a node of tree
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v)
    {
        this->data = v;
        this->left = this->right = NULL;
    }
};
 
    // Inorder Traversal
void printInorder(Node* node)
{
    if (node == NULL)
        return;
 
    // Traverse left subtree
    printInorder(node->left);
 
    // Visit node
    cout << node->data << " ";
 
    // Traverse right subtree
    printInorder(node->right);
}
 
// Driver code
int main()
{
    // Build the tree
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(12);
    root->right->left = new Node(21);
    root->right->right = new Node(25);
    root->left->left = new Node(3);
    root->left->right = new Node(15);
 
    / Function call
    cout << "Inorder Traversal: ";
    printInorder(root);
    return 0;
}