//3. Write a program to print the factorial of a number using a loop.
#include <iostream>
using namespace std;
int main ()
{
    int num,fact=1;
    cout<<"Enter any number :"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"The factorial of number is : "<<fact<<endl;
    return 0;
}