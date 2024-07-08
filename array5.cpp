//printing an array through a function
#include<iostream>
using namespace std;
void printArray(int input[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    cout<<"Enter array elements :";
    cout<<input<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    printArray(input, n);
}
