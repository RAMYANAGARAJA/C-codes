//outputting characters after null character
#include<iostream>
using namespace std;
int main()
{
    char name[100];
    cin>>name;
    name[5]='d';
    name[7]='g';
    name[6]='\0';
    cout<<name;
}
