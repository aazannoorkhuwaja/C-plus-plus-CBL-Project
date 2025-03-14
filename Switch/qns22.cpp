//20.Create a program that determines if a number is odd or even using switch case. 
#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter a number:"<<endl;
cin>>num;
switch (num%2)
{
    case 0:
    {
        cout<<"The number is even";
        break;
    }
    case 1:
    {
        cout<<"The number is odd";
        break;
    }
}
return 0;
}