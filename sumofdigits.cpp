#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int digit;
    int sumeven=0;
    int sumodd=0;
    while(number>0)
    {
        digit=number%10;
        if(digit%2==0)
        {
            sumeven=sumeven+digit;
        }
        else
        {
            sumodd=sumodd+digit;
        }
        number /=10;
    }
    cout<<sumeven<<endl;
    cout<<sumodd<<endl;
}
