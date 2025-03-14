//24.Create a program to convert temperature from Fahrenheit to Celsius or vice versa.
#include<iostream>
using namespace std;
int main()
{
    double far,cel;
    int choice;
    cout<<"Enter 1 to convert Fahrenheit to Celsius or 2 to convert Celsius to Fahrenheit: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout <<"Enter temp in fahrenheit: ";
            cin>>far;
            cel = (far-32)*5.0/9.0;
            cout<<"Temperature in Celsius: "<<cel;

        }
        case 2:
        {
            cout<<"enter temp in celsius: ";
            cin>>cel;
            far= 9.0/5.0*cel+32;
            cout<<"Temperature in Fahrenheit: "<<far;
        }
        default:
        {
            cout<<"not valid choice!";
        }
    }
    return 0;
}