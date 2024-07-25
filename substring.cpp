//printing all the possible substrings of a string
#include<iostream>
#include<cstring>
using namespace std;
void printsubstrings(char name[])
{
    int n=strlen(name);
    for(int i=0;i<n;i++)
    {
        string substr="";
        for(int j=i;j<n;j++)
        {
            substr+=name[j];
            cout<<substr<<endl;
        }
    }
}
int main()
{
    char name[100];
    cin>>name;
    printsubstrings(name);
}
