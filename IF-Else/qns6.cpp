//6. Write a program to determine if a character is a vowel or consonant.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter Any Character then we examine is it vowel or consonent: "<<endl;
    cin>>ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "This is Vowel: " << ch << endl;
    } else {
        cout << "This is Consonant: " << ch << endl;
    }
    return 0;
}
