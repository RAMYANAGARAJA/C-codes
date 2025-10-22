class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
       unordered_map<int,int> prefix;
       int sum=0;
       int maxlen=0;
       int n=arr.size();
       for(int i=0;i<n;i++)
       {
           sum+=arr[i];
           if(sum==k)
           {
               maxlen=i+1;
           }
           if(prefix.find(sum-k)!=prefix.end())
           {
               maxlen=max(maxlen,i-prefix[sum-k]);
           }
           if(prefix.find(sum)==prefix.end())
           {
               prefix[sum]=i;
           }
       }
       return maxlen;
    }
};
