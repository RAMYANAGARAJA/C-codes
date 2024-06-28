//printing numbers from 1 to n without a certain entity using for loop
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    for(i=1;i<10;i++)
    {
        if(i==7)
        {
            continue;
        }
        cout<<i<<endl;
    }

}
