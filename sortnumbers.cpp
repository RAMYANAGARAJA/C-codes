#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   vector<int> sorted;
   sorted.push_back(a);
   sorted.push_back(b);
   sorted.push_back(c);
   sort(sorted.begin(),sorted.end());
   for(int i=0;i<sorted.size();i++)
   {
       cout<<sorted[i]<<endl;
   }
   cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

}
