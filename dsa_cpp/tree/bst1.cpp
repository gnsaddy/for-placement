
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

// Create a node
struct Node *newNode(int item)
{
    // struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = new struct Node();
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Insert a node
struct Node *insert(struct Node *node, int key)
{
    // Return a new node if the tree is empty
    if (node == NULL)
        return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->data)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// Inorder traversal
void inorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}

// Preorder traversal
void preorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";
}
// Find the inorder successor
struct Node *minValueNode(struct Node *node)
{
    struct Node *current = node;

    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Deleting a node
struct Node *deleteNode(struct Node *root, int key)
{
    // Return if the tree is empty
    if (root == NULL)
        return root;
    // Find the node to be deleted
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        // If the node is with only one child or no child
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        // If the node has two children
        struct Node *temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{
    struct Node *root = newNode(15);
    root->left = newNode(10);
    root->right = newNode(16);
    root->left->left = newNode(8);
    // root = insert(root, 14);
    // root = insert(root, 8);
    // root = insert(root, 3);
    // root = insert(root, 1);
    // root = insert(root, 6);
    // root = insert(root, 7);
    // root = insert(root, 10);
    // root = insert(root, 14);
    // root = insert(root, 4);
    // root = insert(root, 2);
    
    deleteNode(root, 8);

    // cout << root->data;
    cout << "Inorder traversal ";
    inorderTraversal(root);
    cout << endl;

    cout << "\nPreorder traversal ";
    preorderTraversal(root);
    cout << endl;

    cout << "\nPostorder traversal ";
    postorderTraversal(root);
    cout << endl;

    cout << "Min value node : " << minValueNode(root)->data << endl;
}