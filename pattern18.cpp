#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int n1;
    n1=(N+1)/2;
    int i=1;
    while(i<=n1)
    {
        int spaces=1;
        while(spaces<=n1-i)
        {
            cout<<' ';
            spaces=spaces+1;
        }
        int stars=1;
        while(stars<=2*i-1)
        {
            cout<<'*';
            stars=stars+1;;
        }
        cout<<endl;
        i++;
    }
    int n2=n1-1;
    i=n2;
    while(i>=1)
    {
        int space=n2-i+1;
        while(space>=1)
        {
            cout<<' ';
            space=space-1;
        }
        int star=2*i-1;
        while(star>=1)
        {
            cout<<'*';
            star=star-1;
        }
        cout<<endl;
        i--;
    }
}
