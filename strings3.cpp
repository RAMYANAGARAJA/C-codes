//printing the length of the input string
#include<iostream>
using namespace std;
int length(char arr[])
{
    int count=0;
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cin>>name;
    cout<<length(name)<<endl;
}
