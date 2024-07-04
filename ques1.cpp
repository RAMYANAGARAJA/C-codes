//printing pyramid pattern
#include<iostream>
using namespace std;
int main()
{
   int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
        {
        for (int j = 1; j <= N - i; ++j)
         {
            cout << " ";
        }
        for (int j = i; j >= 1; --j)
        {
            cout << j;
        }
        for (int j = 2; j <= i; ++j)
        {
            cout << j;
        }
        cout << endl;
    }
}
