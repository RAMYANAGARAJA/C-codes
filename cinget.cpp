//counting the number of space, alphabets and numbers user enters until '$' is entered
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int countalphabet=0;
    int countnumbers=0;
    int countspaces=0;
    while(ch!='$')
    {
        ch=cin.get();
        if(ch>='a'&&ch<='z')
        {
            countalphabet++;
        }
        if(ch>='0'&&ch<='9')
        {
           countnumbers++;
        }
        if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            countspaces++;
        }
    }
    cout<<countalphabet<<endl;
    cout<<countnumbers<<endl;
    cout<<countspaces<<endl;

}
