#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int digit=n/1000;
    if(digit%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
}
