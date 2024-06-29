//counting the number of inputs the user gives until user enters $
#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch=cin.get();
    int count=0;
    while(ch!='$')
    {
        count++;
        ch=cin.get();
    }
    cout<<count<<endl;
}
