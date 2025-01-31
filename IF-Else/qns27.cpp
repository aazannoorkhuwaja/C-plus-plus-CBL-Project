//27.Create a program that checks if a number is a Fibonacci number.
#include<iostream>
using namespace std;
int main (){
    int num;
    cout <<"Enter any number :"<<endl;
    cin>>num;
    if(num%1==0 || num%1==0 || num%2==0 || num%3==0 || num%5==0 || num%8==0 || num%13==0)
    {
        cout <<"Number is from fibonacci:"<<endl;

    }
    else{
        cout<<"Number is not from fibonacci :"<<endl;
    }
    return 0;
}