class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==0)
        {
            return -1;
        }
        unordered_map<int,int> freq;
        for(int x:arr)
        {
            int c=++freq[x];
            if(c>n/2)
            {
                return x;
            }
        }
        return -1;
    }
};
