// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
         int m=arr2.size();
         for(int i=0;i<m;i++)
         {
             arr1.push_back(arr2[i]);
         }
        sort(arr1.begin(),arr1.end());
        int k=arr1.size();
        return (arr1[(k-1)/2]+arr1[k/2]);
    }
};
