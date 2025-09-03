//Find total number of visible nodes in a binary tree. A node is visible, if it has highest value in the path from root to node. It was done in O(n).
#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x): val(x),left(NULL),right(NULL){}
};
class Solution
{
public:
    int countvisible(Node *root)
    {
        return dfs(root, INT_MIN);
    }
private:
    int dfs(Node* node, int maxSoFar)
    {
        if(!node) return 0;
        int visible=0;
        if(node->val >= maxSoFar)
        {
            visible =1;
            maxSoFar=node->val;
        }
        visible +=dfs(node->left,maxSoFar);
        visible +=dfs(node->right,maxSoFar);
        return visible;
    }
};
