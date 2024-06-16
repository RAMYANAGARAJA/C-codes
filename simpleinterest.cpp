#include<iostream>
using namespace std;
int main()
{
    int p;
    int r;
    int t;
    cout<<"Enter the principle , rate and time"<<endl;
    cin>>p;
    cin>>r;
    cin>>t;
    int interest=(p*r*t)/100;
    cout<<interest<<endl;
}
