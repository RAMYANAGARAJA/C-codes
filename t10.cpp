class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                ans.push_back(i);
                break;
            }
        }

        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==x)
            {
                ans.push_back(i);
                break;
            }
        }
        if(ans.empty())
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
