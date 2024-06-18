#include<iostream>
using namespace std;
int main()
{
  int num;
  int sum=0;
  do{
    cin>>num;
    sum=sum+num;
  }while(num!=0);
    cout<<sum<<endl;
}
