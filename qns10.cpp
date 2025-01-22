//10.Create a program that checks if a given string is a palindrome.
//10. Create a program that checks if a given string is a palindrome.
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter a string to check if it is a palindrome: " << endl;
    cin >> name;

    bool is_palindrome = true;
    int length = name.length();

    for (int i = 0; i < length / 2; ++i) {
        if (name[i] != name[length - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}