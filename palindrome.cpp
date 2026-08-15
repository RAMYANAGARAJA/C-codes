#include<iostream>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int copied=input;
    int reversed=0;
    while(copied>0)
    {
        int digit=copied%10;
        reversed=reversed*10+digit;
        copied=copied/10;
    }
    cout<<reversed<<endl;
    if(reversed==input)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
