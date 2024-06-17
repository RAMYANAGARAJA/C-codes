#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int d=2;
    if(n%d==0)
    {
        cout<<"Not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }
}
