//program for insertion sort
#include<iostream>
using namespace std;
void Insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    Insertionsort(input,n);
    for(int i=0;i<n;i++)
    {
        cout<<input[i];
    }
}
