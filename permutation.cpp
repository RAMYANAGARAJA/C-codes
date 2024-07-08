#include<iostream>
using namespace std;
int factorial(int n)
{
    int i;
    int output=1;
    for(i=1;i<=n;i++)
    {
        output=output*i;
    }
    return output;
}
int permutation(int n,int r)
{
    int a;
    int b;
    int per;
    a=factorial(n);
    b=factorial(n-r);
    per=a/b;
    return per;
}
int main()
{
     int ans;
    ans=permutation(5,2);
    cout<<ans<<endl;
}
