//9. Write a program to check if a number is prime.
#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter Any number :"<<endl;
cin >> n;
if (n <= 1) {
        cout << "Not a prime number" << endl;
    } 
    else if (n == 2 || n == 3 || n == 5 || n == 7) {
        cout << "Prime number" << endl;
    }
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        cout << "Not a prime number" << endl;
    }
    else {
        cout << "Prime number" << endl;
    }
    return 0;
}