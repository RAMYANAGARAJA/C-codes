#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int remainder;
    if(a>b)
    {
        remainder=a%b;
    }
    else
    {
        remainder=b%a;
    }
    if(remainder==0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }
}
