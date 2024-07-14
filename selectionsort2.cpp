//inversion calculation
#include<iostream>
using namespace std;
int getinversions(int arr[],int n)
{
    int inversion=0;
    for(int i=0;i<n-1;i++)
    {
        int numI=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                numI=j;
            }
        }
        int temp=arr[numI];
        arr[numI]=arr[i];
        arr[i]=temp;
        inversion=inversion+(numI-i);
    }
    return inversion;
}
int main()
{
  int arr[6]={7,4,9,2,3,1};
  int inversion=getinversions(arr,6);
  cout<<inversion<<endl;
}
