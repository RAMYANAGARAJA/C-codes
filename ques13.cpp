//Given an array arr[] of size n, containing elements from the range 1 to n, and each element appears at most twice, return an array of all the integers that appears twice.
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        vector<int> result;
        for( auto &p :freq)
        {
            if(p.second==2)
            {
                result.push_back(p.first);
            }
        }
        return result;
    }
};
