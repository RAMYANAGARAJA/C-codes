//printing the code for selection sort
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=arr[i],minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini=arr[j];
                minIndex=j;
            }
        }

    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
    }
}
int main()
{
    int arr[]={3,1,6,9,0,4};
    selectionsort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

