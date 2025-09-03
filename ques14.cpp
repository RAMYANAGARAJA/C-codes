//Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int> result(2);
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i< n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==2)
            {
                result[0]=i;
            }
            else if(mp[i]==0)
            {
                result[1]=i;
            }
        }

        return result;
    }
};
