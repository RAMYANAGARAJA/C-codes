// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        vector<int> freq;
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++)
        {
            int count =0;
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==1)
                {
                    count++;
                }
            }
            freq.push_back(count);
        }
        int index=max_element(freq.begin(),freq.end())-freq.begin();
        return index;
    }
};
