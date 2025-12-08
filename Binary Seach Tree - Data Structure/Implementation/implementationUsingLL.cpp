#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node 
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

static int idx = -1;

Node *buildTree(vector<int> &preOrder)
{
    idx++;
    if (preOrder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preOrder[idx]);
    root -> left = buildTree(preOrder);    // left subtree
    root -> right = buildTree(preOrder);   // right subtree
    return root;
}

void preOrderTrav(Node *root)
{
    if (root == NULL)   return;
    cout << root -> data;
    preOrderTrav(root -> left);
    preOrderTrav(root -> right);
}

void inOrderTrav(Node *root) 
{
    if (root == NULL)   return;
    inOrderTrav(root -> left);
    cout << root -> data;
    inOrderTrav(root -> right);
}

void postOrderTrav(Node *root) 
{
    if (root == NULL)   return;
    postOrderTrav(root -> left);
    postOrderTrav(root -> right);
    cout << root -> data;
}

void levelOrderTrav(Node *root)
{
    queue<Node*> q;
    q.push(root);

    while(q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr -> data << "  ";
        if (curr -> left != NULL)
        {
            q.push(curr -> left);
        }
        if (curr -> right != NULL)
        {
            q.push(curr -> right);
        }
    }
    cout << endl;
}

void levelOrderTravLineByLine(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else 
            {
                break;
            }
        }
        cout << curr -> data << "  ";
        if (curr -> left != NULL)
        {
            q.push(curr -> left);
        }
        if (curr -> right != NULL)
        {
            q.push(curr -> right);
        }
    }
    cout << endl;
}

int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    // cout << root -> data << endl;
    // cout << root -> left -> data << endl;
    // cout << root -> right -> data;

    preOrderTrav(root);
    cout << endl;
    inOrderTrav(root);
    cout << endl;
    postOrderTrav(root);
    cout << endl;
    levelOrderTrav(root);
    levelOrderTravLineByLine(root);

    return 0;
}
/**/