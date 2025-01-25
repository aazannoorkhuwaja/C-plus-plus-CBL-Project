//10.Create a program that checks if a given string is a palindrome.
#include <iostream>
using namespace std;

int main() {
    string name, rev;
    cout << "Enter a string to check if it is a palindrome: " << endl;
    cin >> name;
    int i = 1, length = 1;
    while (name[i] != '\0') {
        i++;
        length++;
    }
    cout << "Length is: " << length << endl;
    for (int i = length; i >= 0; i--) {
        rev += name[i];  
    }
    if (rev == name) {
        cout << "String is Palindrome Because each character is equal after reversing: " << rev << endl;
    } else {
        cout << "String is not Palindrome:" <<rev<< endl;
    }
    return 0;
}
