//25.Write a program to count how many times a digit appears in a number.
#include <iostream>
using namespace std;

int main() {
    int n, digit, count = 0, remainder;
    
    cout << "Enter the number: ";
    cin >> n;
    
    cout << "Enter the digit to count: ";
    cin >> digit;
    
    while (n != 0) {
        remainder = n % 10; 
        if (remainder == digit) {
            count++; 
        }
        n = n / 10; 
    }
    
    cout << "The digit " << digit << " appears " << count << " times in the number." << endl;
    
    return 0;
}
