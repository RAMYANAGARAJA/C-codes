#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> submax;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int maximum=arr[i];
                for(int k=i;k<=j;k++)
                {
                    if(arr[k]>maximum)
                    {
                        maximum=arr[k];
                    }
                }
                submax.push_back(maximum);
            }
        }
        for(int i=0;i<submax.size();i++)
        {
            cout<<submax[i]<<" ";
        }
        cout<<endl;
    }

}
