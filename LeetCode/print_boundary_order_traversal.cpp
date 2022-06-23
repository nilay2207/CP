#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isLeaf(node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<int> vec;
void addleftLeaf(node *root)
{
    node *cur = root->left;

    while (cur)
    {
        /* code */
        if (!isLeaf(cur))
        {
            if (cur->left)
            {
                cur = cur->left;
                vec.push_back(cur->value);
            }
            else
            {
                vec.push_back(cur->value);
            }
        }
    }
}
void addrightLeaf(node *root, vector<int> traversal)
{
    node *cur = root->right;

    while (cur)
    {
        /* code */
        if (!isLeaf(cur))
        {
            if (cur->right)
            {
                cur = cur->right;
                traversal.push_back(cur->value);
            }
            else
            {
                traversal.push_back(cur->value);
            }
        }
    }

    for (int i = traversal.size() - 1; i >= 0; i--)
    {
        vec.push_back(traversal[i]);
    }
}

void addLeaves(node *root)
{
    if (isLeaf(root))
    {
        vec.push_back(root->value);
    }

    if (root->left)
    {
        addLeaves(root->left);
    }
    if (root->right)
    {
        addLeaves(root->right);
    }
}

int main()
{
}