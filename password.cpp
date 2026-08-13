#include<iostream>
using namespace std;
int main()
{
    int current;
    while(cin>>current)
    {
    if(current==1999)
    {
        cout<<"Correct"<<endl;
        break;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
    }
    return 0;
}
