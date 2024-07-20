//finding the kth smallest number in an array
#include<iostream>
using namespace std;
int kthsmallest(int input[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(input[j]>input[j+1])
            {
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return input[k-1];
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int l=kthsmallest(input,n,k);
    cout<<l<<endl;
}
