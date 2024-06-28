#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime=true;
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(!isprime)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
}
