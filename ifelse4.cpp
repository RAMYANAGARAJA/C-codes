#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    cout<<"Enter the sides of the triangle"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    if(x+y>z || y+z>x || x+z>y)
    {
        if(x==y && y==z)
        {
            cout<<"The triangle is an equilateral triangle"<<endl;
        }
        else if(x==y || y==z || z==x)
        {
            cout<<"The triangle is an isosceles triangle"<<endl;
        }
        else
        {
            cout<<"The triangle is a scalene triangle"<<endl;
        }
    }
    else
    {
        cout<<"The triangle does not exist"<<endl;
    }
}
