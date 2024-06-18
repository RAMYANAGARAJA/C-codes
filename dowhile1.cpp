#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
            }
            i++;
    }
    if(sum==n)
    {
        cout<<"the number is a perfect number"<<endl;
    }
    else
    {
        cout<<"The number is not a perfect number"<<endl;
    }

    return 0;

}
