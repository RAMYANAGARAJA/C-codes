#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            index=i;
            break;
        }
    }
    cout<<index;
}
