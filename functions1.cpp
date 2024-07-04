//printing combination of a number using functions
#include<iostream>
using namespace std;
long long factorial(int n)
{
    long long ans =1;
    int i=1;
    while(i<=n)
    {
        ans=ans*i;
        i++;
    }
    return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;
   if(n<r)
    {
    cout<<"the input is invalid"<<endl;
    }
    else
    {
    long long a=factorial(n);
    long long b=factorial(n-r);
    long long c=factorial(r);
    long long choose=a/(b*c);
    cout<<choose<<endl;
    }
}
