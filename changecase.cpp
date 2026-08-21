#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(int(a)>=65 && int(a)<=90)
    {
        cout<<char(int(a)+32);
    }
    else
    {
        cout<<char(int(a)-32);
    }
}
