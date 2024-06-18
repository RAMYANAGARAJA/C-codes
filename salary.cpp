#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int basic;
    int total_salary;
    int allow;
    cin >> basic;

    int HRA = (20 * basic) / 100;
    int DA = (50 * basic) / 100;
    int PF = (11 * basic) / 100;

    char grade;
    cin >> grade;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    total_salary = basic + HRA + DA + allow - PF;
    int ans = round((double)total_salary);
    cout << ans << endl;

    return 0;
}
