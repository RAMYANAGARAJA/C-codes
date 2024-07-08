//checking whether the number given as input belongs to the fibonacci series
#include<iostream>
using namespace std;
bool checknumber(int n)
{
    int t1=1,t2=0,nextterm;
    if(n==0||n==1)
    {
        return true;
    }
    while(true)
    {
        nextterm=t1+t2;
        if(nextterm==n)
        {
            return true;
        }
        if(nextterm>n)
        {
            return false;
        }
        t1=t2;
        t2=nextterm;
    }
    return false;
}
int main()
{
    bool ans=checknumber(8);
    cout<<ans<<endl;
}
