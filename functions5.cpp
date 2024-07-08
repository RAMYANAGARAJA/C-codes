//printing a celcius and farhenheit scale
#include<iostream>
using namespace std;
void printtable(int start,int ending,int step)
{
    int far;
    int cel;
    for(far=start;far<=ending;far+=step)
    {
        cel=(far-32)*5/9;
        cout<<far<<'\t'<<cel<<endl;
    }
}
int main()
{
    int start,ending,step;
    cin>>start>>ending>>step;
    printtable(start,ending,step);
}
