class Solution {
  public:
  void inorder(Node *root, vector<int> &v)
  {
      if (root==nullptr) return;
      inorder(root->left,v);
      v.push_back(root->data);
      inorder(root->right,v);

  }
    int getCount(Node *root, int l, int h) {
        // your code here
        vector<int> v;
        inorder(root, v);
        int count=0;
        for (int x:v)
        {
            if(x>=l && x<=h)
            {
                count++;
            }
        }
        return count;
    }
};
