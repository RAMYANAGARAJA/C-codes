//replacing a particular character with another character in a stream
#include<iostream>
using namespace std;
void replacecharacter(char arr[],char c1,char c2)
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    for(int i=0;i<count;i++)
    {
        if(arr[i]==c1)
        {
            arr[i]=c2;
        }
    }
}
int main()
{
    char name[100];
    char c1;
    char c2;
    cin>>name;
    cin>>c1;
    cin>>c2;
   replacecharacter(name,c1,c2);
   cout<<name<<endl;
}
