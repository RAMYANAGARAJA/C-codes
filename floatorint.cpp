#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    long long b=(long long)a;
    double difference=a-b;
    if(difference>0)
    {
        cout<<"float "<<b<<" "<<difference;
    }
    else
    {
        cout<<"int "<<b;
    }
}
