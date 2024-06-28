#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;++i)
    {
        bool isprime = true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                isprime=false;
                continue;
            }
        }
        if(isprime)
        {
            cout<<i<<endl;
        }
    }
}
