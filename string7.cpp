//removing spaces from an input string
#include<iostream>
using namespace std;
void removespaces(char arr[])
{
    int j=0;
    for(int i=0;arr[i]!=0;i++)
    {
        if(arr[i]!=' ')
        {
            arr[j++]=arr[i];
        }
    }
    arr[j]='\0';
}
int main()
{
    char name[100];
    cin.getline(name,100);
    removespaces(name);
    cout<<name<<endl;
}
