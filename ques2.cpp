//printing a pattern
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
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int stars=1;
        while(stars<=2*i-2)
        {
            cout<<'*';
            stars++;
        }
       j=n-i+1;
       while(j>=1)
       {
        cout<<j;
        j--;
       }
    cout<<endl;
    i++;
    }

}
