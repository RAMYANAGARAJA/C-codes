#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int spaces=1;
        while(spaces<=n-i)
        {
            cout<<' ';
            spaces=spaces+1;
        }
        int j=1;
        int k=i;
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        j=i-1;
        k=k-2;
        while(j>=1){
            cout<<k;
            k--;
            j--;
        }
        cout<<endl;
        i++;
    }
}
