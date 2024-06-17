#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int remainder;
    remainder=(num%3==0)?0:(num%3==1)?1:2;
    cout<<remainder<<endl;
}
