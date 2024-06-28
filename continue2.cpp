//printing numbers from one to n except for a particular entity
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<10)
    {
        if(i==7)
        {
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
}
