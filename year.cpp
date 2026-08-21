#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int years=num/365;
    int digit=num%365;
    int month=digit/30;
    int days=digit%30;
    cout<<years<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days";

}
