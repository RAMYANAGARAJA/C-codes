#include<iostream>
using namespace std;
int main()
{
    float a;
    cin>>a;
    if(a>=0 && a<=25)
    {
        cout<<"Interval [0,25]";
    }
    else if(a>25 && a<=50)
    {
        cout<<"Interval (25,50]";
    }
    else if(a>50 && a<=75)
    {
        cout<<"Interval (50,75]";
    }
    else if(a>75 && a<=100)
    {
        cout<<"Interval (75,100]";
    }
    else
    {
        cout<<"Out of Intervals";
    }
}
