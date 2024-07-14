//printing the reverse of an array using function
#include<iostream>
using namespace std;
void reversearr(int arr[],int n)
{
    int start=0;
    int ending=n-1;
    int temp;
    while(start<ending)
    {
        temp=arr[start];
        arr[start]=arr[ending];
        arr[ending]=temp;
        start++;
        ending--;
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int reversed[n];
    int i;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
