#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree(Node *root)
{
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data on the left side of the " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter data on the right side of the " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void Levelorder(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    if (root == NULL)
    {
        return;
    }

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->value << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int isBinaryTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = isBinaryTree(root->left);
    if (lh == -1)
        return -1;
    int rh = isBinaryTree(root->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;
    return max(lh, rh) + 1;
}

int maxDepth(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    if (left > right)
    {
        return 1 + left;
    }
    else
    {
        return 1 + right;
    }
}

bool isBalanced(Node *root)
{
    return isBinaryTree(root) != -1;
}

int maxDiameter(Node *root, int maxi)
{

    if (root == NULL)
    {
        return 0;
    }

    int left = maxDiameter(root->left, maxi);
    int right = maxDiameter(root->right, maxi);

    maxi = max(maxi, left + right);
    return max(left, right) + 1;
}

bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL || root2 == NULL)
    {
        return (root1 == root2);
    }

    return (root1->value == root2->value) && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}

bool isLeaf(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else
        return false;
}

void leftBoundary(Node *root, vector<int> &vec)
{

    Node *cur = root->left;

    while (cur)
    {
        if (!isLeaf(cur))
        {

            vec.push_back(cur->value);
            if (cur->left)
            {
                cur->left;
            }
            else
            {
                cur->right;
            }
        }
    }
}



void rightBoundary(Node*root,vector<int> &vec){
    Node*cur=root->right;
    vector<int>temp;
    while (cur)
    {
        if(!isLeaf(cur)){
            temp.push_back(cur->value);
            if(cur->right){
               cur= cur->right;
            } else{
               cur= cur->left;
            }
            
        }



    }
    
    for(int i=temp.size();i>=0;i--){

        vec.push_back(temp[i]);

    }

}

void addLeaves(Node*root,vector<int> &vec){
    if(isLeaf(root)){
        vec.push_back(root->value);
        return;
    }

    if(root->left){
        addLeaves(root->left,vec);
    }

    if(root->right){
        addLeaves(root->right,vec);
    }
}

int main()
{

    Node *root = NULL;
    root = buildtree(root);
    Levelorder(root);

    cout << maxDepth(root);
}