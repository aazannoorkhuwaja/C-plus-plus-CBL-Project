//14.Create a program to classify a number as a perfect number.
#include <iostream>
using namespace std;
int main() {
    int num, reminder = 0;
    cout << "Enter any number to find out if it is a perfect number: ";
    cin >> num;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {  
            reminder += i;  
        }
    }
    if (reminder == num && num != 0) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
