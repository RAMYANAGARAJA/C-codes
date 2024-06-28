//printing a pattern using break statement
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
             if(j>i)
        {
            break;
        }
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
