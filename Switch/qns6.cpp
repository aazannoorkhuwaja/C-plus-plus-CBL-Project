//6. Create a program that simulates a simple calculator using switch case. 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"Sum: "<<a+b;
            break;
        case '-':
            cout<<"Difference: "<<a-b;
            break;
        case '*':
            cout<<"Product: "<<a*b;
            break;
        case '/':
            cout<<"Quotient: "<<a/b;
            break;
        default:
            cout<<"Invalid operator";
    }
    return 0;
}