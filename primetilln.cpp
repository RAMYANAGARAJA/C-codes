#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bool prime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime && i>1)
        {
            cout<<i<<" ";
        }
    }
}
