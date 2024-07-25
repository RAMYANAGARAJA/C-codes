//inputting a string and reversing it
#include<iostream>
using namespace std;
void reversestring(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    int j=0,k=count-1;
    while(j<k)
    {
        char temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
        j++;
        k--;
    }
}
int main()
{
    char input[100];
    cin.getline(input,100);
    reversestring(input);
    cout<<input<<endl;
}

