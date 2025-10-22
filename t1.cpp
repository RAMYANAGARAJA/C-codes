class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        vector<int> temparr;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                temparr.push_back(0);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                temparr.push_back(1);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2)
            {
                temparr.push_back(2);
            }
        }
        for(int i=0;i<temparr.size();i++)
        {
            arr[i]=temparr[i];
        }
    }
};
