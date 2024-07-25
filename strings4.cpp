//checking whether the phrase is palindrome or not
#include<iostream>
using namespace std;
bool checkpalindrome(char arr[])
{
    int i;
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    for(int j=0;j<count/2;j++)
    {
        if(arr[j]!=arr[count-j-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[100];
    cin>>arr;
    cout<<checkpalindrome(arr)<<endl;
}
