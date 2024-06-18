#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x;
    int n;
    cout<<"enter the value of the base"<<endl;
    cin>>x;
    cout<<"Enter the value of the exponent"<<endl;
    cin>>n;
    double result=pow(x,n);
    cout<<x<<"raised to the power of"<<n<<"is"<<result<<endl;
    return 0;
}
