//printing the sum of elements of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;

}
