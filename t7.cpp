class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int h=b.size();
        for(int i=0;i<h;i++)
        {
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if(i==k-1)
            {
                return a[i];
            }
        }
        return -1;
    }
};
