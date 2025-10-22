class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            ans.push_back(a[i]);
        }
        for(int j=0;j<b.size();j++)
        {
            ans.push_back(b[j]);
        }
        sort(ans.begin(),ans.end());
        int j = 0;
        for (int i = 1; i < ans.size(); i++) {
        if (ans[i] != ans[j]) {
            j++;
            ans[j] = ans[i];
          }
        }
        ans.resize(j+1);
        return ans;
    }
};
