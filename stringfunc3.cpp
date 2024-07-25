//copying one string into other using copy function
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char input1[5]="abcd";
    char input2[4]="def";
    cout<<"before copying";
    cout<<input1<<endl;
    cout<<input2<<endl;
    strcpy(input1,input2);
    cout<<"after copying";
    cout<<input1<<endl;
    cout<<input2<<endl;
    strcpy(input1,"hello");
    cout<<"after another copying";
    cout<<input1<<endl;
    cout<<input2<<endl;
    strncpy(input1,input2,2);
    cout<<"after copying";
    cout<<input1<<endl;
    cout<<input2<<endl;
}
