#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int sum=0;
    int i=0;
    while(i<=N)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum<<endl;
}
