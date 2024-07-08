//printing minimum of elements in an array
#include<iostream>
using namespace std;
int main()
{
    int input[10];
    for(int i=0;i<10;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<input[i]<<endl;
    }
    int minimum=input[0];
    for(int i=1;i<10;i++)
    {
        if(minimum>input[i])
        {
            minimum=input[i];
        }
    }
    cout<<"minimum="<<minimum<<endl;
}
