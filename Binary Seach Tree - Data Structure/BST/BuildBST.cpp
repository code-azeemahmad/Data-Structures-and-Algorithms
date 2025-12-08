#include <iostream>
#include <vector>
using namespace std;

class Node 
{
public:
    int data;
    Node *left;
    Node *right;

    Node (int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root -> data)
    {
        root -> left = insert(root -> left, val);
    }
    else if (val > root -> data)
    {
        root -> right = insert(root -> right, val);
    }
    return root;
}

Node *buildBST(vector<int> &arr)
{
    Node *root = NULL;

    for(int val : arr)
    {
        root = insert(root, val);
    }
    return root;
}

bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root -> data == key)
    {
        return true;
    }
    else if (key < root -> data)
    {
        search(root -> left, key);
    }
    else if (key > root -> data)
    {
        search(root -> right, key);
    }
}

void inOrderTrav(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTrav(root -> left);
    cout << root -> data << " ";
    inOrderTrav(root -> right);
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node *root = buildBST(arr);

    // inOrderTrav(root);
    // cout << endl;

    cout << search(root, 2) << endl;

    return 0;
}