#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,queries;
    cin>>n>>queries;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long> prefixsum(n);
    prefixsum[0]=arr[0];
    for(int i=1;i<n;i++)
    {

        prefixsum[i]=prefixsum[i-1]+arr[i];

    }
    for(int i=0;i<queries;i++)
    {
        int start,end;
        cin>>start>>end;
        cout<<prefixsum[end-1]-(start > 1 ? prefixsum[start-2] : 0)<<endl;
    }
}
