#include<iostream>
using namespace std;
void func(int input[])
{
    cout<<"function :"<<sizeof(input)<<endl;
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    cout<<input<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    cout<<"Main:"<<sizeof(input)<<endl;
    func(input);
}
