//printing all prefixes of a string
#include<iostream>
using namespace std;
#include<cstring>
void printprefixes(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
}
int main()
{
    char name[100];
    cin>>name;
    printprefixes(name);
}
