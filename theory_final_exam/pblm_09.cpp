#include <bits/stdc++.h>
using namespace std;
 
// A binary tree node has data, pointer to left child and a
// pointer to right child
struct node {
    int data;
    struct node* left;
    struct node* right;
};
 
// Given a binary tree, return true if the tree is complete
// else false
bool isCompleteBT(node* root)
{
    // Base Case: An empty tree is complete Binary Tree
    if (root == NULL)
        return true;
 
    // Create an empty queue
    // int rear, front;
    // node **queue = createQueue(&front, &rear);
    queue<node*> q;
    q.push(root);
    // Create a flag variable which will be set true when a
    // non full node is seen
    bool flag = false;
 
    // Do level order traversal using queue.
    // enQueue(queue, &rear, root);
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
 
        /* Check if left child is present*/
        if (temp->left) {
            // If we have seen a non full node, and we see a
            // node with non-empty left child, then the
            // given tree is not a complete Binary Tree
            if (flag == true)
                return false;
 
            q.push(temp->left); // Enqueue Left Child
        }
        // If this a non-full node, set the flag as true
        else
            flag = true;
 
        /* Check if right child is present*/
        if (temp->right) {
            // If we have seen a non full node, and we see a
            // node with non-empty right child, then the
            // given tree is not a complete Binary Tree
            if (flag == true)
                return false;
 
            q.push(temp->right); // Enqueue Right Child
        }
        // If this a non-full node, set the flag as true
        else
            flag = true;
    }
 
    // If we reach here, then the tree is complete Binary
    // Tree
    return true;
}
 
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}


 
/* Driver code*/
int main()
{
    
    node* root = newNode(20);
    root->left = newNode(10);
    root->right = newNode(22);
    root->left->left = newNode(5);
    root->left->right = newNode(12);
    root->right->left = newNode(21);
    root->right->right = newNode(25);
    root->left->left = newNode(3);
    root->left->right = newNode(15);
 
    if (isCompleteBT(root) == true)
        cout << "Complete Binary Tree";
    else
        cout << "NOT Complete Binary Tree";
 
    return 0;
}