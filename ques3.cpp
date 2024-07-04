//printing the second largest number out of a set of numbers
#include<iostream>
#include <climits>
using namespace std;
int main()
{
   int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n < 2) {
        cout << "Second largest element: " << INT_MIN << endl;
        return 0;
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        // Update first and second largest elements
        if (num > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = num;
        } else if (num > secondLargest && num < firstLargest) {
            secondLargest = num;
        }
    }

    cout << "Second largest element: " << secondLargest << endl;

    return 0;

}
