class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        vector<int> elements;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                elements.push_back(mat[i][j]);
            }
        }
        sort(elements.begin(),elements.end());
        return elements[k-1];
    }
};

