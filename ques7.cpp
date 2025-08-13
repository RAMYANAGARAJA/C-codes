#include<iostream>
#include<map>
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans=0;
    long long sum=0;
    map<long,long> mp;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        ans+=mp[sum-x];
        if(sum==x)ans++;
        mp[sum]++;

    }
    cout<<ans<<endl;
}
