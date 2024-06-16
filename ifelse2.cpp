#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter the numbers"<<endl;
    cin>>a;
    cin>>b;
    if(a==b)
    {
        cout<<"they are equal"<<endl;
    }
    else
    {
        if(a>b)
        {
            cout<<"a is greater"<<endl;
        }
        else
        {
            cout<<"a is lesser"<<endl;
        }
    }
}
