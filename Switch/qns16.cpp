// 16.Create a program that takes a number and outputs the corresponding ASCII character. 
#include<iostream>
using namespace std;
int main() {
int num;
cout << "Enter a number: ";
cin >> num;
    switch (num<=127)
{
case 1:
{
    if(num>=0){
    cout << "The ASCII character is: " << char(num) << endl;
    }
    break;
}
case 0:
{   
    cout << "Invalid input" << endl;
    break;
}
return 0;
}