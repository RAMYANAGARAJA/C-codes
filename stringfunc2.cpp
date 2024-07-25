//comparing two strings using compare function
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char input1[100],input2[100];
    cin>>input1;
    cin>>input2;
    if(strcmp(input1,input2)==0)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
