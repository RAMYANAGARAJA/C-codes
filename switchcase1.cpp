#include<iostream>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int a;
    int b;
    cin>>a;
    cin>>b;
    switch(input)
    {
case 1:
    {
        cout<<a+b<<endl;
        break;
    }
case 2:
    {
        cout<<a-b<<endl;
        break;
    }
case 3:
    {
        cout<<a*b<<endl;
        break;
    }
case 4:
    {
        cout<<a/b<<endl;
        break;
    }
case 5:
    {
        cout<<a%b<<endl;
        break;
    }
case 6:
    {
        cout<<"program exits"<<endl;
        break;
    }
default:
    {
        cout<<"Invalid operation"<<endl;
    }
    }
}
