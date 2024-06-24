#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    for(int i = 0; i < N; ++i) {
        char startChar = 'A' + N - 1 - i;
        for(int j = 0; j <= i; ++j) {
            cout << char(startChar + j);
        }
        cout << endl;
    }

    return 0;
}

