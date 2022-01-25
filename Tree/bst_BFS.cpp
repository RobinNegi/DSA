// to insert in a tree
#include <bits/stdc++.h>
using namespace std;
// define a structure of node
struct bstNode
{
    int data;
    bstNode *left;
    bstNode *right;
};

// function to create node of a bst
bstNode *newNode(int data)
{
    bstNode *node = new bstNode();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// function to insert a node at desired location
bstNode *insert(bstNode *root, int data)
{
    if (root == NULL)
        root = newNode(data);
    else if (root->data >= data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}
// bfs traversal using queue
void bfs(bstNode *root)
{
    if (root == NULL)
        return;
    queue<bstNode *> q;
    q.push(root);
    while (!q.empty())
    {
        bstNode *current = q.front();
        if (current->left != NULL)
            q.push(current->left);
        if (current->right != NULL)
            q.push(current->right);
        cout << (q.front()->data) << " ";
        q.pop();
    }
}
// main function

int main()
{ // create a root node null
    bstNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 11);
    root = insert(root, 12);
    cout << "Success inserted ";
    bfs(root);
    return 0;
}